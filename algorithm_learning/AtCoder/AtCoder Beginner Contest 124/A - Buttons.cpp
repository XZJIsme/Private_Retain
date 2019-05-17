#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int A,B;
    cin>>A>>B;
    int a=A+B;
    int b=A+A-1;
    int c=B+B-1;
    cout<<max(a,max(b,c));
    return 0;
}