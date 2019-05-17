
// // 枚举公差 p/q ，那么等比数列前三项应该为 kp^2, kpq, kq^2(k 为正整数)
// // 再枚举 k

// #include <iostream>
// #include <sstream>
// #include <strstream>
// #include <string>
// #include <algorithm>
// #include <cstdlib>
// #include <cmath>
// using namespace std;
// typedef long long ll;
// ll hn[(int)(1e7*5)];
// ll t=0;
// string doubletostr(double num)
// {
//     string ret;
//     strstream ss;
//     ss << num;
//     ss >> ret;
//     return ret;
// }
// double strtodouble(string str)
// {
//     double ret;
//     stringstream strs;
//     strs << str;
//     strs >> ret;
//     return ret;
// }
// void generate(double k,double p,double q)
// {
//     double res=k*p*p+k*p*q+k*q*q;
//     double toadd=k*q*q;
//     while(res>=100&&res<=1e15)
//     {
//         hn[t++]=(long long)res;
//         if(floor(q/p)!=q/p) break;
//         toadd*=q/p;
//         res=strtodouble(doubletostr(res)+doubletostr(toadd));
//     }
// }
// int main()
// { 
//     for(double k=1;k<=1e15;k++)
//     {
//         ll lastt=t;
//         if(lastt==t)
//     }
//     return 0;
// }



// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     int a=98897;
// //     for(int i=1;i<a;i++)
// //         if(a%i==0)
// //             cout<<i;
// //     return 0;
// // }