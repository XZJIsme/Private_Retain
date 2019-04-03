#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
typedef long long ll;
struct object
{
	ll a;
	ll b;
};
ll quickpow(ll a,ll b)
{
    ll ans=1;
    a=a%998244353;
    while(b!=0)
    {
        if(b&1) ans=(ans*a)%998244353;
        b>>=1;
        a=(a*a)%998244353;
    }
    return ans;
}
void solve()
{
	ll ans=1,n,m;
	cin>>n>>m;
	struct object *line;
	line=new struct object[n];
	for(int i=0;i<n;i++)
	{
		line[i].a=0;
		line[i].b=0;
	}
	for(int i=0;i<m;i++)
	{
		ll L,R,x;
		cin>>L>>R>>x;
		if(x==2)
		{
			for(int k=L-1;k<R;k++)
			{
				line[k].a=line[k].a+1;
			}
		}
		if(x==3)
		{
			for(int k=L-1;k<R;k++)
			{
				line[k].b=line[k].b+1;
			}
		}
	}
	ll mina=line[0].a,minb=line[1].b;
	for(int i=1;i<n;i++)
	{
		if(line[i].a<mina) mina=line[i].a;
		if(line[i].b<minb) minb=line[i].b;
		/*cout<<"line[i].a="<<line[i].a<<endl;
		cout<<"line[i].b="<<line[i].b<<endl;*/
	}
	/*cout<<"mina="<<mina<<endl;
	cout<<"minb="<<minb<<endl;*/
	cout<<(quickpow(2,mina)*quickpow(3,minb))%998244353<<endl;
	return;
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--) {solve();}
	return 0;
}
