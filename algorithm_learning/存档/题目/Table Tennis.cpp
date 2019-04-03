#include<cstdio>
#include<vector>
#include<iostream>
#include<cstdlib>
using namespace std;
vector<int> a;
vector<int> w;
vector<int> store;
int main()
{
	int n,k,i,s,c=0;
	cin>>n>>k;
	getchar();
	for(i=0;i<n;i++)
	{
		scanf("%d",&s);
		a.push_back(s);
		store.push_back(s);
		w.push_back(0);
	}
	getchar();
	while(w[0]!=k)
	{
		c++;
		if(a[0]>a[1])
		{
			w[0]++;
			a.push_back(a[1]);
			a.erase(a.begin()+1);
			w.push_back(w[1]);
			w.erase(w.begin()+1);
		}
		else
		{
			w[1]++;
			a.push_back(a[0]);
			a.erase(a.begin());
			w.push_back(w[0]);
			w.erase(w.begin());
		}
		/*for(auto p:a)
		{
			cout<<p<<' ';
		}
		puts("");
		for(auto p:w)
		{
			cout<<p<<' ';
		}
		puts("");
		system("pause");*/
		if(w[0]==k) {printf("%d\n",a[0]); return 0;}
		if(store==a||c>=n*10)
		{
			for(i=0,k=1;k<n;k++)
			{
				if(w[k]>w[0])
					i=k;
			}
			printf("%d\n",a[i]);
			return 0;
		}
	}
	return 0;
} 
