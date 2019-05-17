#include<bits/stdc++.h>
using namespace std;
bool test1()
{
    return !!(!true-1);
}
bool test2()
{
    cout<<"!"<<endl;
    return true;
}
int main()
{
    if(test1()||test2());
    return 0;
}