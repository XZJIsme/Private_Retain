#include "bits/stdc++.h"
using namespace std;

string nxt[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
int rnd;
int p; string x;
int holder;

struct player {
    map<string, int> card;

    player() {}
    player(const string& s) {
        vector<int> pos; pos.emplace_back(-1);
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == ' ') pos.emplace_back(i);
        }
        pos.emplace_back(s.length());
        for(int i = 0; i < pos.size() - 1; i++)
            card[s.substr(pos[i]+1, pos[i+1]-pos[i]-1)] ++;
    }

    void show() {
        if(card.empty()) {
            cout << "WINNER" << endl;
            return ;
        }
        for(auto& i: nxt) {
            if(card.count(i)) {
                for(int j = 0; j < card[i]; j++)
                    cout << i << " ";
            }
        }
        cout << endl;
    }
} _player[4];

void add_card(player& pp, vector<string>& v) {
    for(auto& i: v) pp.card[i] ++;
    v.clear();
}

void erase(map<string, int>& mp, string s) {
    mp[s] --;
    if(mp[s] == 0) mp.erase(s);
}

bool drop_card(player& pp, int c, vector<string>& v) {
    if(c == 0) {
        x = nxt[rnd], p = 1;
        if(pp.card.count(nxt[rnd])) {
            erase(pp.card, nxt[rnd]);
            v.push_back(nxt[rnd]);
            return false;
        } else {
            v.push_back(pp.card.begin()->first);
            erase(pp.card, pp.card.begin()->first);
            return true;
        }
    } else if(c == 1) {
        if(pp.card.count(nxt[rnd])) {
            p = pp.card[nxt[rnd]], x = nxt[rnd];
            for(int i = 0; i < p; i++)
                v.push_back(x);
            pp.card.erase(nxt[rnd]);
            return false;
        } else {
            v.push_back(pp.card.begin()->first);
            p = 1, x = nxt[rnd];
            erase(pp.card, pp.card.begin()->first);
            return true;
        }
    } else if(c == 2) {
        if(pp.card.count(nxt[rnd])) {
            p = pp.card[nxt[rnd]], x = nxt[rnd];
            for(int i = 0; i < p; i++)
                v.push_back(x);
            pp.card.erase(nxt[rnd]);
            return false;
        } else {
            int Min = 20;
            for(auto& i: pp.card) Min = min(Min, i.second);
            for(auto& i: pp.card) {
                if(i.second == Min) {
                    p = i.second;
                    x = nxt[rnd];
                    for(int k = 0; k < p; k++)
                        v.push_back(i.first);
                    pp.card.erase(i.first);
                    return true;
                }
            }
        }
    } else if(c == 3) {
        x = nxt[rnd];   p = 0;
        if(pp.card.count(nxt[rnd])) p = pp.card[nxt[rnd]], pp.card.erase(nxt[rnd]);
        for(int i = 0; i < p; i++)
            v.push_back(x);

        if(p >= 3 or pp.card.empty()) return false;
        else {
            p ++;
            v.push_back(pp.card.begin()->first);
            erase(pp.card, pp.card.begin()->first);
            return true;
        }
    }
}

bool is_challenge(player& pp, int c) {
    if(c == 0) {
        if(holder == 3 and (!pp.card.count(nxt[(rnd+1)%13])))
            return true;
        return (pp.card.count(x) and (pp.card[x] + p > 4));
    } else if(c == 1) {
        return (holder == 0 and (!pp.card.count(nxt[(rnd+1)%13])));
    } else if(c == 2) {
        return (pp.card.count(x) and (pp.card[x] == 4));
    } else if(c == 3) {
        return _player[holder].card.empty();
    }
}

int main() {
//    freopen("in.txt", "r", stdin);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while(getline(cin, s)) {
        _player[0] = player(s);
        getline(cin, s); _player[1] = player(s);
        getline(cin, s); _player[2] = player(s);
        getline(cin, s); _player[3] = player(s);


        int c = 0; rnd = 0, holder = 0;
        vector<string> v;
        while(true) {
            holder = c;
            bool is_lie = drop_card(_player[c], c, v);
            for(int i = 1; i < 4; i++) {
                int cc = (c + i) % 4;
                if(is_challenge(_player[cc], cc)) {
                    if(is_lie) add_card(_player[c], v);
                    else
                        add_card(_player[cc], v);
                    break;
                }
            }
            if(_player[c].card.empty()) break;
            c = (c + 1) % 4;
            rnd = (rnd + 1) % 13;
        }

        for(int i = 0; i < 4; i++) _player[i].show();
    }
}
