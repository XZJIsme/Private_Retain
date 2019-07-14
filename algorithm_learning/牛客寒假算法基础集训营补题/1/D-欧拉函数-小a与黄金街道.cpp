#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll mod=(ll)(1e9+7);
ll euler(ll n)
{
    if(n==1)
        return 1;
    int ret=n;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
        {
            ret=ret-ret/i;
            while(n%i==0)
                n/=i;
        }
    if(n>1)
        ret=ret-ret/n;
    return ret;
}
ll qpow(ll a,ll b)
{
    if(b==0)
        return 1;
    ll ret=qpow(a*a%mod,b/2);
    if(b%2==1)
        ret=ret*a%mod;
    return ret;
}
int main()
{
    ll n,k,A,B;
    cin>>n>>k>>A>>B;
    cout<<((A+B)%mod*qpow(k,euler(n)*n/2))%mod<<endl;
    return 0;
}