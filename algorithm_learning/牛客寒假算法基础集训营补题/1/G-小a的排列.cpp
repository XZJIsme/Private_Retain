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
    int px, py; // ���ڼ�¼x��y��λ��
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == x) px = i;
        if (a[i] == y) py = i; // ��¼x��y��λ��
        pos[a[i]]=i;
    }
    if(x>y) {swap(x,y);swap(px,py);}
    int l =px,r =py; // l��rΪ��
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
 * �ܽ�һ�����⣺
 * Ҫ�ҵ���������l�������min(pos[x],pos[y])��r�����
 * ����������䣬l����l~r��λ�����ĵط���ͬ����
 * 
 * �ؼ�������뵽�أ�����
 * 
 * �����ֻ�뵽�ˣ����ҵ������l��r��Ҳ����x��y�ڵ�l��r��Ȼ��ֱ����������������
 * ����������Ļ� �ݹ��������ã��������Ӷ�ΪO(n^2)����̫��
 * 
 */