#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
vector<ll> dp;
ll p[(ll)1e6];
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
        {
            cout<<0<<endl;
            continue;
        }
        dp.clear();
        for(int i=0;i<n;i++) cin>>p[i];
        dp.push_back(p[0]);
        ll ans=1;
        for(int i=1;i<n;i++)
        {
            if(p[i]>*(--dp.end()))
            {
                dp.push_back(p[i]);
                ans++;
            }
            if(p[i]<*(--dp.end()))
            {
                dp[lower_bound(dp.begin(),dp.end(),p[i])-dp.begin()]=p[i];
            }
        }
        cout<<ans<<endl;
    } 
    return 0;
}








// #include <stdio.h>
// #include <string.h>
// #include <algorithm>
// using namespace std;
 
// int a[100047],dp[100047],n;
 
// int bin(int size,int k)
// {
//     int l = 1,r = size;
//     while(l<=r)
//     {
//         int mid = (l+r)/2;
//         if(k>dp[mid])
//             l = mid+1;
//         else
//             r = mid-1;
//     }
//     return l;
// }
 
// int LIS(int *a)
// {
//     int i,j,ans=1;
//     dp[1] = a[1];
//     for(i = 2; i<=n; i++)
//     {
//         if(a[i]<=dp[1])
//             j = 1;
//         else if(a[i]>dp[ans])
//             j = ++ans;
//         else
//             j = bin(ans,a[i]);
//         dp[j] = a[i];
//     }
//     return ans;
// }
// int main()
// {
// 	int i;
// 	while(~scanf("%d",&n))
// 	{
// 		for(i = 1; i <= n; i++)
// 		{
// 			scanf("%d",&a[i]);
// 		}
// 		int ans = LIS(a);
//         for(int i=1;i<=ans;i++) 
//         printf("%d ",dp[i]);
//         puts("");
// 		printf("%d\n",ans);
// 	}
// 	return 0;
// }
















































































































































































// // // #include<iostream> 
// // // #include<algorithm>
// // // #include<cstdio>
// // // #include<vector>
// // // using namespace std;


// // // // int p[(int)1e5+10],d[(int)1e5+10];
// // // // int main()
// // // // {
// // // //     int n;
// // // //     while(cin>>n)
// // // //     {
// // // //         getchar();
// // // //         for(int i=0;i<n;i++) cin>>p[i];
// // // //         getchar();
// // // //         int len=0;
// // // //         d[0]=p[0];
// // // //         for(int i=1;i<n;i++)
// // // //         {
// // // //             if(p[i]>p[len])
// // // //             {
// // // //                 p[++len]=p[i];
// // // //             }
// // // //             else if(p[i]<p[len-1]) 
// // // //                 p[len-1]=p[i];
// // // //                 else if(p[i]<p[len]) p[len]=p[i];
// // // //         }
// // // //         cout<<len+1<<endl;
// // // //     }
// // // //     return 0;
// // // // }




// // // //这究竟算递推还是动态规划 
// // // int p[100000+100],dp[100000+100];
// // // int main()
// // // {
// // //     int L;
// // //     while(~scanf("%d",&L))
// // //     { 
// // //         int ans=0;
// // //         for(int i=0;i<L;i++) scanf("%d",p+i);
// // //         if(L==1) 
// // //         {
// // //             puts("1");
// // //             continue;
// // //         }
// // //         dp[L-1]=1;
// // //         for(int i=L-2;i>=0;i--)
// // //         {
// // //             dp[i]=1;
// // //             for(int j=i+1;j<L;j++)
// // //             {
// // //                 if(p[j]>p[i])
// // //                 {
// // //                     dp[i]=max(dp[i],1+dp[j]);
// // //                     goto here;
// // //                 }
// // //             }
// // //             here:ans=max(dp[i],ans);
// // //         }
// // //         cout<<ans<<endl;
// // //     } 
// // //     return 0;
// // // }





// // #include <stdio.h>
// // #include <string.h>
// // #include <algorithm>
// // using namespace std;
 
// // int a[100047],dp[100047],n;
 
// // int bin(int size,int k)
// // {
// //     int l = 1,r = size;
// //     while(l<=r)
// //     {
// //         int mid = (l+r)/2;
// //         if(k>dp[mid])
// //             l = mid+1;
// //         else
// //             r = mid-1;
// //     }
// //     return l;
// // }
 
// // int LIS(int *a)
// // {
// //     int i,j,ans=1;
// //     dp[1] = a[1];
// //     for(i = 2; i<=n; i++)
// //     {
// //         if(a[i]<=dp[1])
// //             j = 1;
// //         else if(a[i]>dp[ans])
// //             j = ++ans;
// //         else
// //             j = bin(ans,a[i]);
// //         dp[j] = a[i];
// //     }
// //     return ans;
// // }
// // int main()
// // {
// // 	int i;
// // 	while(~scanf("%d",&n))
// // 	{
// // 		for(i = 1; i <= n; i++)
// // 		{
// // 			scanf("%d",&a[i]);
// // 		}
// // 		int ans = LIS(a);
// // 		printf("%d\n",ans);
// // 	}
// // 	return 0;
// // }






