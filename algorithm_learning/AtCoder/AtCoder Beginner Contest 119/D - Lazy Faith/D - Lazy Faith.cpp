// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// ll A,B,Q;
// ll s[(ll)(1e5+5)],t[(ll)(1e5+5)];
// ll bisect(ll *to_search,ll l,ll r,ll r_max,ll num){
//     if(num>to_search[r_max]) return r_max;
//     if(num<to_search[0]) return 0;
//     if(r-l<=5){
//         ll ret=LLONG_MAX;
//         for(int i=l;i<=r;i++){
//             if(to_search[i]<=num) ret=i;
//         }
//         if (ret + 1 != r_max + 1)
//             if (num - to_search[ret] > to_search[ret + 1] - num)
//             {
//                 return ret + 1;
//             }
//         return ret;
//     }
//     if (num >= to_search[(l + r) / 2])
//     {
//         return bisect(to_search, (l + r) / 2, r, r_max, num);
//     }
//     else return bisect(to_search,l,(l+r)/2,r_max,num);
// }
// int main(){ 
//     cin>>A>>B>>Q; getchar();
//     for(int i=0;i<A;i++) {cin>>s[i]; getchar();}
//     for (int i = 0; i < B; i++)
//     {
//         cin >> t[i];
//         getchar();
//     }
//     for (int i = 0; i < Q; i++)
//     {
//         ll x;
//         cin >> x;
//         getchar();
//         ll a = bisect(s, 0, A - 1, A - 1, x);
//         ll ans1 = abs(s[a] - x) + abs(s[a] - t[bisect(t, 0, B - 1, B - 1, s[a])]);

//         // cout<<"1."<<ans1<<endl;

//         ll b = bisect(t, 0, B - 1, B - 1, x);
//         // cout<<ans1<<endl;
//         ll bj = b;
//         ll ans2 = min(ans1, abs(t[(b)] - x) + abs(t[(b)] - s[bisect(s, 0, A - 1, A - 1, t[b])]));
//         if (s[a] == x)
//         {
//             ll xyz=abs(t[b]-s[a]);
//         } 
//         //找s经过t
//         //1.s
//         if(s[a]<x){
//             if(t[b]>x) b--;
//             if(b==-1) b++;
//             else if(t[b]>s[a]) ans2=min(ans2,x-min(s[a],t[b]));
//         }
//         // cout<<"b="<<b<<endl;
//     else    if(s[a]>x){
//             if(t[b]<x) b++;
//             if(b==B) b--;
//             else if(t[b]<s[a]) ans2=min(ans2,max(s[a],t[b])-x);
//         } 

//         b=bj;
//         if(s[a]>=x)
//         a--;
//         else a++;
//         if(a==-1) a++;
//         if(a==A) a--;

//         ans2 = min(ans2, abs(s[a] - x) + abs(s[a] - t[bisect(t, 0, B - 1, B - 1, s[a])]));
//         // cout<<"4."<<ans2<<endl;
//         if (s[b] >= x)
//             b--;
//         else
//             b++;
//         if (b == -1)
//             b++;
//         if (b == B)
//             b--;

//         ans2 = min(ans2, abs(t[(b)] - x) + abs(t[(b)] - s[bisect(s, 0, A - 1, A - 1, t[b])]));
//         // cout<<"5."<<ans2<<endl;
//         b = bj;
//         if (s[a] < x)
//         {
//             if (t[b] > x)
//                 b--;
//             if (b == -1)
//                 b++;
//             else if (t[b] > s[a])
//                 ans2 = min(ans2, x - min(s[a], t[b]));
//         }
//         // cout<<"b="<<b<<endl;
//         else if (s[a] > x)
//         {
//             if (t[b] < x)
//                 b++;
//             if(b==B) b--;
//             else if(t[b]<s[a]) ans2=min(ans2,max(s[a],t[b])-x);
//         } 
// cout<<ans2<<endl;
//     }
//     return 0;
// }


// //////wa了好久，情况考虑不全！！！！！！！！！！！！！！！！！
// /*
// 二分写得倒挺好的嘛！！！！！！！！！！

// 一开始只考虑了4（3）种情况！应该有8（6）种情况！！！！！！！！！！！！
// */



#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll A,B,Q;
ll s[(ll)(1e5+5)],t[(ll)(1e5+5)];
ll bisect(ll *to_search,ll l,ll r,ll r_max,ll num){
    if(num>to_search[r_max]) return r_max;
    if(num<to_search[0]) return 0;
    if(r-l<=5){
        ll ret=LLONG_MAX;
        for(int i=l;i<=r;i++){
            if(to_search[i]<=num) ret=i;
        }
        if (ret + 1 != r_max + 1)
            if (num - to_search[ret] > to_search[ret + 1] - num)
            {
                return ret + 1;
            }
        return ret;
    }
    if (num >= to_search[(l + r) / 2])
    {
        return bisect(to_search, (l + r) / 2, r, r_max, num);
    }
    else return bisect(to_search,l,(l+r)/2,r_max,num);
}
int main(){ 
    cin>>A>>B>>Q; getchar();
    for(int i=0;i<A;i++) {cin>>s[i]; getchar();}
    for (int i = 0; i < B; i++)
    {
        cin >> t[i];
        getchar();
    }
    for (int i = 0; i < Q; i++)
    {
        ll x;
        cin >> x;
        getchar();
        ll a = bisect(s, 0, A - 1, A - 1, x);
        ll ans1 = abs(s[a] - x) + abs(s[a] - t[bisect(t, 0, B - 1, B - 1, s[a])]);

        // cout<<"1."<<ans1<<endl;

        ll b = bisect(t, 0, B - 1, B - 1, x);
        // cout<<ans1<<endl;
        ll bj = b;
        ll ans2 = min(ans1, abs(t[(b)] - x) + abs(t[(b)] - s[bisect(s, 0, A - 1, A - 1, t[b])]));
        if (s[a] == x)
        {
            ll xyz=abs(t[b]-s[a]);
        } 
        //找s经过t
        //1.s
        if(s[a]<x){
            if(t[b]>x) b--;
            if(b==-1) b++;
            else if(t[b]>s[a]) ans2=min(ans2,x-min(s[a],t[b]));
        }
        // cout<<"b="<<b<<endl;
    else    if(s[a]>x){
            if(t[b]<x) b++;
            if(b==B) b--;
            else if(t[b]<s[a]) ans2=min(ans2,max(s[a],t[b])-x);
        } 

        b=bj;
        if(s[a]>=x)
        a--;
        else a++;
        if(a==-1) a++;
        if(a==A) a--;

        ans2 = min(ans2, abs(s[a] - x) + abs(s[a] - t[bisect(t, 0, B - 1, B - 1, s[a])]));
        // cout<<"4."<<ans2<<endl;
        if (s[b] >= x)
            b--;
        else
            b++;
        if (b == -1)
            b++;
        if (b == B)
            b--;

        ans2 = min(ans2, abs(t[(b)] - x) + abs(t[(b)] - s[bisect(s, 0, A - 1, A - 1, t[b])]));
        // cout<<"5."<<ans2<<endl;
        b = bj;
        if (s[a] < x)
        {
            if (t[b] > x)
                b--;
            if (b == -1)
                b++;
            else if (t[b] > s[a])
                ans2 = min(ans2, x - min(s[a], t[b]));
        }
        // cout<<"b="<<b<<endl;
        else if (s[a] > x)
        {
            if (t[b] < x)
                b++;
            if(b==B) b--;
            else if(t[b]<s[a]) ans2=min(ans2,max(s[a],t[b])-x);
        } 
cout<<ans2<<endl;
    }
    return 0;
}


