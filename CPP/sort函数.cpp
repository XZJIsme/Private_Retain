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
    if(A.x!=B.x) //��˵��С����
        return A.x<B.x;
    else    //�Ҷ˵�Ӵ�С������ѡȡ�����ٵ�����
        return A.y>B.y;
}
int main()
{
    int m,n,i,j,k,t;
    while(~scanf("%d%d",&m,&n))
    {
        for(i=0; i<m; i++)
            scanf("%d%d",&a[i].x,&a[i].y);//������������Ҷ˵�
        sort(a,a+m,cmp);
        if(a[0].x!=1)  //�����һ���������˵�û�и��ǵ��߽磬˵���޷���ȫ����
        {
            printf("-1\n");
            continue;
        }
        j=0;//�����Ҷ˵�ֵ
        k=1;
        t=a[0].y;
        for(i=1; i<m; i++)
        {
            if(a[i].x>t+1) //һ��Ҫ��t+1
            {
                t=j;
                k++;
            }
            if(a[i].x<=t+1)
            {
                if(a[i].y>j) //����Ҷ˵�������ڵ������ֵ�����ֵΪ��
                    j=a[i].y;
                if(a[i].y==n)  //����Ҷ˵���ڱ߽磬˵����ȫ����
                {
                    k++;       //�����1��˵���������һ������
                    t=n;     //�ѱ߽縳��t����������ѭ��
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


