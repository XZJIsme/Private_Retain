#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int N,M;
vector<int> vec[200+10];
int main()
{
    cin>>N>>M;
    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;
        for(int j=0;j<n;i++)
        {
            int s;
            cin>>s;
            vec[i].push_back(s);
             
        }

    }
    return 0;
}

// https://blog.csdn.net/c20180630/article/details/70175814
// https://blog.csdn.net/qq_36386435/article/details/80087566