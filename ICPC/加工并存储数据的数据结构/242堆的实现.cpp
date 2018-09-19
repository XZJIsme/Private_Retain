#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
//堆的复杂度：log n 

int heap[10000],sz=0;//sz,即size

void push(int x){
/*添加*/ int i=sz++;
	while(i>0)
	{ int p=(i-1)/2;
			if(heap[p]<=x) break;
			else//把父亲结点的数值调换下去 
			{heap[i]=heap[p]; i=p;}
	}heap[i]=x;
}

int pop()
/*取出最小值并删除*/
{ int ret=heap[0];//English Tip：retain（此处的ret），vt. 保持；雇；储存，记住
	 int x=heap[--sz],i=0;
	 while(i*2+1<sz){
		int a=i*2+1,b=i*2+2;
		if(b<sz&&heap[b]<heap[a]) {a=b;}
		if(heap[a]>=x) break;
		heap[i]=heap[a];
		i=a;
	 }heap[i]=x;
  return ret;
}

int main()
{	int N,ret;
cin>>N;
for(int i=0;i<N;i++,push(ret))
cin>>ret;
while(sz)
{
	printf("%d ",pop());
}
return 0;
} 
