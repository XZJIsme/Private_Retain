#include<vector>
#include<cstdio>
#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;
/*int main()
{
	vector<int> test;
	int i;
	for(i=1;i<=10;i++)
		test.push_back(i);
	cout<<test[1]<<endl<<endl;
	//system("pause");
	test.pop_back();
	test.erase(test.begin());
	for(auto m:test)
		cout<<m<<endl;
	return 0;
}*/ bool cmp(int a,int b){return a>b;
 }
int main()
{	
	vector<int> s1;
	vector<int> s2;
	int i=3;
	//int a[5]={5,2,5,4,3};
	s1.push_back(3);
	s1.push_back(2);
	s1.push_back(5);
	s1.push_back(6);
	s1.push_back(1);
	s1.erase(s1.begin());
	//
	/*printf("%d\n",s1[i]);*/for(auto k:s1) cout<<k<<' '; system("pause");
	auto &v=*(s1.begin()+1);//引用 (C++11)
	
	/*vector<int>*/auto *switchofvector/*switch:开关*/=&s1;//(s1.begin()+1);
	auto/*迭代器*/ a=switchofvector->begin();//auto a=xxx->xxx
	a++;
	
	printf("%p,%p\n",&v,a);
	puts("");
	//v=*(s1.begin()+2);
	//printf("%d\n%p\n%p\n",*(&v),&v,s1.begin());
	//printf("%d")
//cout<<++*(s1.end()-1)<<"\n";system("pause");
//	system("pause");
	s1.insert(s1.begin()+1,85);
	s1.erase(s1.begin()+1);
	//sort(a,a+5);
	//sort(s1.begin(),s1.end(),cmp);
	for(auto k:s1) cout<<k<<' ';
	return 0;
 }
