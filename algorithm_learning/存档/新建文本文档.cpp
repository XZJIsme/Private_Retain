#include <cstdio>
#include <cstring>
#include<iostream>
using namespace std;
const int maxn = 1000010;
int a[maxn*2];
int q[maxn*2];
typedef long long ll;
int s[1000000*2+100];
ll sum[1000000*2+100];
int main()
{
    int n;
    while(scanf("%d", &n) && n)
    {
        for(int i = 1; i <= n; i++)
        {
            scanf("%d", &a[i]);
            a[i+n] = a[i];
        }
        int cnt = 0;
        for(int i = 1; i <= 2*n; i++)
            sum[i] += sum[i-1]+a[i];
        for(int i=0;i<=2*n;i++)cout<<sum[i]<<" ";
        /*int front = 0, rear = -1;
        
        for(int i = 1; i < 2*n; i++)
        {
            while(front <= rear && i - q[front] >= n)
                front++;   
            while(front <= rear && a[i] <= a[q[rear]])
                rear--;
            q[++rear] = i;
            if(i >= n && a[q[front]] - a[i-n] >= 0)
                cnt++;
        }
        printf("%d\n", cnt);*/
    }
    return 0;
}
