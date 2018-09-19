#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;
struct available{int x;int y;}a[25000];
bool cmp(struct available a,struct available b) {return a.x<b.x;}
bool cmp1(struct available a,struct available b) {return a.y>b.y;}
int main()
{
	int N,T,i,result=0,right,nowright=0,left,hjk=0;
	scanf("%d%d",&N,&T);getchar();
	for(i=0;i<N;i++) {scanf("%d%d",&a[i].x,&a[i].y); getchar();}
	 
	sort(a,a+N,cmp);
	i=0;
	result=0;
	nowright=0;
	if(a[0].x>1)
	{puts("-1");
	return 0;}
	for(left=1,i=0;i<N;i++)
	{
		right=0;
		while(a[i].x<=left+1){if(a[i].y>=nowright) {nowright=a[i].y; right=a[i].y;} i++;}
		left=nowright;result++;i--;
		if(right==0){puts("-1");break;}
		if(nowright==T){printf("%d\n",result);break;}
	/*if(result==1&&N>=2) printf("2\n"); else if(result==1&&N==1) puts("-1"); break;}*/
	}
	//cout<<nowright;
	return 0;
}
