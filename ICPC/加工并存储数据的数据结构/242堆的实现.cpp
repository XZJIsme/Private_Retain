#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
//�ѵĸ��Ӷȣ�log n 

int heap[10000],sz=0;//sz,��size

void push(int x){
/*���*/ int i=sz++;
	while(i>0)
	{ int p=(i-1)/2;
			if(heap[p]<=x) break;
			else//�Ѹ��׽�����ֵ������ȥ 
			{heap[i]=heap[p]; i=p;}
	}heap[i]=x;
}

int pop()
/*ȡ����Сֵ��ɾ��*/
{ int ret=heap[0];//English Tip��retain���˴���ret����vt. ���֣��ͣ����棬��ס
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
