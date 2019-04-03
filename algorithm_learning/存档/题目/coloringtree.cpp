/*#include<stdio.h>
void coloringtree(int n)
{
	int a[n],color[n],result=1,i;
	for(i=1;i<n;i++) scanf("%d",a+i); getchar();
	for(i=0;i<n;i++) scanf("%d",&color[i]); getchar();
	for(i=1;i<n;i++) if(color[i]!=color[a[i]-1]) result++;
	printf("%d",result);
}
int main()
{	
	int n;
	scanf("%d",&n); getchar();
	coloringtree(n);
	return 0;
}*/

#include<cstdio>
void coloringtree(int n)
{
	int a[n],color[n],result=1,i;
	for(i=1;i<n;i++) scanf("%d",a+i); getchar();
	for(i=0;i<n;i++) scanf("%d",&color[i]); getchar();
	for(i=1;i<n;i++) if(color[i]!=color[a[i]-1]) result++;
	printf("%d",result);
}
int main()
{	
	int n;
	scanf("%d",&n); getchar();
	coloringtree(n);
	return 0;
}
