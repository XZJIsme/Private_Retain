#include<stdio.h>
int smaller(int a,int b) {if(a<b) return a; else return b;}
int MAX(int a,int b)
{
	if(a==b) return a*2-1; else return (smaller(a,b))*2;
}
int check(char *a)
{
	int i=0,n=0;
	while((*(a+i+1))!='\0')
	{
		if((*(a+i))!=(*(a+i+1)))
			n++;
		i++;
	}
	return n;
}
void swap(char *a,char *b) {int c=*a; *a=*b; *b=c;}
void solution(int a,int b,int x)
{
	char ans[a+b+1];
	int n=a+b,i,t;
	int done0=0;
	int done1=0;
	for(i=0;i<=n;i++) ans[i]='\0';
	if(x==1)
	{
		for(i=0;i<a;i++)
			printf("0");
		for(i=0;i<b;i++)
			printf("1");
		printf("\n");
		return;
	}
	if(x==MAX(a,b))
	{
		if(a==b)
		{
			for(i=0;i<a;i++)
				printf("01");
			printf("\n");
			return;
		}
		if(a>b)
		{
			for(i=0;i<b;i++)
				printf("01");
			for(;i<a;i++)
				printf("0");
			printf("\n");
			return;
		}
		else
		{
			for(i=0;i<a;i++)
				printf("10");
			for(;i<b;i++)
				printf("1");
			printf("\n");
			return;
		}
	}
	if(a>b)
	{
		for(i=0,t=0;i<x;i++)
		{
			ans[t++]='0'; done0++;
			if(x==check(ans)) break;
			ans[t++]='1'; done1++;
			if(x==check(ans)) break;
		}
		for(i=0;i<a-done0+1;i++) printf("0");
		for(i=0;i<b-done1+1;i++) printf("1");
		for(i=2;ans[i];i++)
		{
			printf("%c",ans[i]);
		}
		printf("\n");
		return;
	}
	else
	{
		for(i=0,t=0;i<x;i++)
		{
			ans[t++]='1'; done1++;
			if(x==check(ans)) break;
			ans[t++]='0'; done0++;
			if(x==check(ans)) break;
		}
		for(i=0;i<b-done1+1;i++) printf("1");
		for(i=0;i<a-done0+1;i++) printf("%d",0);
		for(i=2;ans[i];i++)
		{
			printf("%c",ans[i]);
		}
		printf("\n");
		return;
	}
	return;
}
int main()
{
	int a,b,x;
	scanf("%d%d%d",&a,&b,&x);
	getchar();
	solution(a,b,x);
	return 0;
}
