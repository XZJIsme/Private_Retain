/*#include <cstdio>
#include <algorithm>
using namespace std;
struct test
{
	int x;
	int y;
} a[100000];


int cmp(struct test A,struct test B)
{
    
        return A.x<B.x;
}
int main()
{
	int m,i;
	scanf("%d",&m); getchar();puts("");
	for(i=0;i<m;i++)
	{
		scanf("%d%d",a[i]->x,a[i]->y);
	getchar();}puts("");
	sort(a,a+m,cmp);
	for(i=0;i<m;i++)
	printf("%d,%d\n",a[i].x,a[i].y);
}*/


#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct qujian
{
    int x,y;
} a[25100];
int cmp(qujian A,qujian B)
{
    if(A.x!=B.x) //左端点从小到大
        return A.x<B.x;
    else    //右端点从大到小，便于选取尽量少的区间
        return A.y>B.y;
}
int main()
{
    int m,n,i,j,k,t;
    while(~scanf("%d%d",&m,&n))
    {
        for(i=0; i<m; i++)
            scanf("%d%d",&a[i].x,&a[i].y);//输入区间的左右端点
        sort(a,a+m,cmp);
        if(a[0].x!=1)  //如果第一个区间的左端点没有覆盖到边界，说明无法完全覆盖
        {
            printf("-1\n");
            continue;
        }
        j=0;//更新右端点值
        k=1;
        t=a[0].y;
        for(i=1; i<m; i++)
        {
            if(a[i].x>t+1) //一定要是t+1
            {
                t=j;
                k++;
            }
            if(a[i].x<=t+1)
            {
                if(a[i].y>j) //如果右端点大于现在的右最大值，最大值为它
                    j=a[i].y;
                if(a[i].y==n)  //如果右端点等于边界，说明完全覆盖
                {
                    k++;       //区间加1，说明这是最后一个区间
                    t=n;     //把边界赋给t，便于跳出循环
                    break;
                }
            }
        }
        if(t==n)
            printf("%d\n",k);
        else
            printf("-1\n");
    }
    return 0;
}


