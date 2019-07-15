////O(n*n) 暴力
// #include<bits/stdc++.h>
// using namespace std;
// string s;
// int main()
// {
//     while(cin>>s)
//     {
//         int ans=0;
//         for(int i=0,res=0;i<s.length();i++)
//             for(int l=i,r=i;;l--,r++)
//                 if(s[l]==s[r]&&l>=0&&r<s.length())
//                     res=r-l+1;
//                 else
//                 {
//                     ans=max(res,ans);
//                     break;
//                 }
//         for(int i=0,res=0;i<s.length();i++)
//             for(int l=i,r=i+1;;l--,r++)
//                 if(s[l]==s[r]&&l>=0&&r<s.length())
//                     res=r-l+1;
//                 else
//                 {
//                     ans=max(res,ans);
//                     break;
//                 }
//         cout<<ans<<endl;
//     }
//     return 0;
// }
////然而显然是不行的

#include<bits/stdc++.h>
using namespace std;
string str;
int main()
{
    while(cin>>str)
    {
        char s[500000];
        int r[500000],pos=0,maxright=0;
        for(int i=0;i<=str.length()*2;i++)
            if(i%2==0)
                s[i]='#';
            else
                s[i]=str[(i+1)/2-1];
        s[str.length()*2+1]='\0';
    }
    return 0;
}