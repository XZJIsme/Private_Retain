#include<bits/stdc++.h>
using namespace std;
int main()
{
    double ans;
    int N;
    cin>>N;
    getchar();
    while(N--)
    {
        double x;
        string u;
        cin>>x>>u;getchar();
        if(u=="JPY")
            ans+=x;
        else
            ans+=x*(double)380000;
    }
    cout<<ans;
    return 0;
}