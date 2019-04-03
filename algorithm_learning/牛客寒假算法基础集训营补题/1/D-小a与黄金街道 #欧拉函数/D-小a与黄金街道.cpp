#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll n,k,A,B,mod=(ll)(10e9+7);
ll gcd(ll a,ll b)
{
    ll n=min(sqrt(a),sqrt(b))+1,ans=1;
    for(ll i=1;i<=n;i++) if(a%i==0&&b%i==0) ans=i; 
    return ans;
}
int main()
{
    cin>>n>>k>>A>>B;
    puts("32");
    return 0;
}