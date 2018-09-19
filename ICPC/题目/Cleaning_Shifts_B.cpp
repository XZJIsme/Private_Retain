#include<cstdio>
#include<algorithm>
#include<cstdlib>
using namespace std;
struct time {int x;int y;};
time a[30000];
bool cmp(time a,time b)
{
	if(a.x!=b.x) return a.x<b.x;
	return a.x<b.x;
}
int main()
{
	int N,T,ans=1,i,r=0,nr;
	while(~scanf("%d%d",&N,&T))
	{
		getchar();
		for(i=0;i<N;i++) {scanf("%d%d",&a[i].x,&a[i].y); getchar();}
		sort(a,a+N,cmp);
		if(a[0].x>1) {printf("-1\n");system("pause"); continue;}
		nr=a[0].y;ans=1;
		for(i=1;i<N;i++)
		{
			//if(a[i].x>nr+1) {printf("-1\n"); return 0;}
			if(a[i].x<=nr+1&&a[i].y>nr)
			{
				r=i;
				for(;a[i].x<=nr+1&&i<N;i++)
				{
					if(a[i].y>a[r].y)
					{
						r=i;
					}
				}
				nr=r;
				ans++;
				i=r;
				if(nr>=T)
				{
					break;
				}
			}
		} 
		if(nr>=T)
		{
			printf("%d\n",ans);
			continue;
		}
		else printf("-1\n");
	}
	return 0;
}
