#include <bits/stdc++.h>
using namespace std;
#define MAXINT_ 2147483647;
int n, x, y, a[100000+10];
int pos[100000+10]; 
// int maxi[100000+10],mini[100000+10];
int main()
{
    cin >> n >> x >> y;
    // maxi[0]=0;
    // mini[0]=MAXINT_;
    int px, py; // 用于记录x、y的位置
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == x) px = i;
        if (a[i] == y) py = i; // 记录x、y的位置
        pos[a[i]]=i;
    }
    if(x>y) {swap(x,y);swap(px,py);}
    int l =px,r =py; // l、r为答案
    if(l>r) swap(l,r);
    int mx=a[l],mn=a[l];
    for(int i = l; i <= r; i++){mx=max(a[i],mx); mn=min(a[i],mn);}
    // cout<<"l="<<l<<" "<<"r="<<r<<endl;
    while (true)
    {
        if(mx - mn == r - l) break;
        
        for(int i=mn;i<=mx;i++){
            l=min(pos[i],l); r=max(pos[i],r);
        }
        for(int i=l;i<=r;i++){mx=max(a[i],mx); mn=min(a[i],mn);}
    }
    // cout<<mx<<" "<<mn<<endl;
    cout<<l<<" "<<r<<endl;
    return 0;
}
/*
 * 总结一下这题：
 * 要找的区间首先l至多得是min(pos[x],pos[y])，r亦如此
 * 随后扩充区间，l得是l~r内位置最靠左的地方，同理……
 * 
 * 关键是如何想到呢？？？
 * 
 * 我最多只想到了，先找到最初的l、r，也就是x、y内的l、r，然后分别向左向右穷举扩充
 * 大概这样做的话 递归可能是最好，不过复杂度为O(n^2)，不太好
 * 
 */