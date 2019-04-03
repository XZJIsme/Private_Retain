#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int R,n;
void solve()
{
    int a[10000+50],b[10000+50];
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    if(n==1) {cout<<'1'<<endl; return;}
    int t=0; a[n]=-1;
    for(int i=0;i<n;i++) if(a[i]!=a[i+1]) b[t++]=a[i];
    //for(int i=0;i<n;i++) cout<<a[i]<<' ';
	//cout<<endl; 
    if(R==0) {cout<<t<<endl; return;}
    int rt,ans=1,i;
    for(i=0;i<t;i++) {if(b[i]-b[0]>R) break;}
	i--;
	rt=b[i++]+R;
    for(;i<t;i++)
        if(b[i]<=rt) continue;
        else
        {
            ans++;
            rt=b[i]+R;
        }
    cout<<ans<<endl;
    return;
}
int main()
{
    while(true)
    {
        cin>>R>>n;
        if(R==-1&&n==-1) return 0;
        else solve();
    }
}                            	
