//依葫芦画瓢自己写一遍
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>























#include<iostream>
#include<stack>
using namespace std;
struct homework
{
    string name;
    int deadline,num_of_days;
}a[15+10]; 
struct to_dp
{
    int last,now,num_to_reduce,now_date;
}dp[(1<<15)+100];
int main()
{
    int T;
    cin>>T;
    while (T--)
    { 
        memset(dp,0,sizeof(dp));
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i].name>>a[i].deadline>>a[i].num_of_days;
        for(int i=1;i<(1<<n);i++)
        {
            dp[i].num_to_reduce=INT_MAX;
            for(int j=n-1;j>=0;j--)
            {                    
                int j_res=j;
                j=1<<j;
                if(i&j)
                { 
                    int res=dp[i-j].now_date+a[j_res].num_of_days-a[j_res].deadline;
                    if(dp[i].num_to_reduce>dp[i-j].num_to_reduce+(res<0?0:res))
                    {
                        dp[i].last=i-j;
                        dp[i].now=j_res;
                        dp[i].num_to_reduce=(dp[i-j].num_to_reduce+(res<0?0:res));
                        dp[i].now_date=dp[i-j].now_date+a[j_res].num_of_days;
                    }
                }
                j=j_res;
            }
        }
        cout<<dp[(1<<n)-1].num_to_reduce<<endl;
        stack<string> ans;
        int i=(1<<n)-1;
        while(i)
        {
            ans.push(a[dp[i].now].name);
            i=dp[i].last; 
        }
        while(!ans.empty())
        {
            cout<<ans.top()<<endl;
            ans.pop();
        }
    }
    return 0;
}








































// // using namespace std;
// // int n;
// // struct homework
// // {
// //     string name;
// //     int deadline;
// //     int days_to_be_done;
// // };
// // struct homework a[20];
// // void solve()
// // {
// //     cin>>n;
// //     for(int i=0;i<n;i++) cin>>a[i].name>>a[i].deadline>>a[i].days_to_be_done;

// // }
// // int main()
// // {
// //     int T;
// //     cin>>T;
// //     while(T--) solve();
// //     return 0;
// // }

// #include<bits/stdc++.h>
// using namespace std;
// int inf=1<<30,n;
// struct homework
// {
//     string name;
//     int dead,cost;
// }a[100];
// struct to_dp
// {
//     int time,score,pre,now;
// }dp[1<<15];
// void solve()
// {
//     memset(dp,0,sizeof(dp));
//     cin>>n;
//     for(int i=0;i<n;i++) cin>>a[i].name>>a[i].dead>>a[i].cost;
//     int end=1<<n;
//     for(int s=1;s<end;s++)
//     {
//         dp[s].score=inf;
//         for(int i=n-1;i>=0;i--)
//         {
//             int tem=1<<i;
//             if(s&tem)
//             {//代码抄到这，有些理解DP的状态转移的内涵了，通过状态转移，祛除重复冗余的状态
//                 int past=s-tem,st=dp[past].time+a[i].cost-a[i].dead;
//                 if(st<0) st=0;
//                 if(st+dp[past].score<dp[s].score)
//                 {
//                     dp[s].score=st+dp[past].score;
//                     dp[s].now=i;
//                     dp[s].pre=past;
//                     dp[s].time=dp[past].time+a[i].cost;
//                 }
//             }
//         }
//     }
//     stack<string> S;
//     int tem=end-1;
//     cout<<dp[tem].score<<endl;
//     while(tem)
//     {
//         S.push(a[dp[tem].now].name);
//         tem=dp[tem].pre;
//     }
//     while(!S.empty())
//     {
//         cout<<S.top()<<endl;
//         S.pop();
//     }
// }
// int main()
// {
//     int T;
//     cin>>T;
//     while(T--) solve();
//     return 0;
// }
