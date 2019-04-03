#include<vector>
#include<cstdio>
#include<algorithm>
using namespace std;
vector<int> plank;
int main()
{
	int N,ret,remain,ans=0;
	scanf("%d",&N);
	getchar();
	remain=N;
	for(int i=0;i<N;i++)
	{
		scanf("%d",&ret);
		getchar();
		plank.push_back(ret);
	}
	if(N==1) {puts("0"); return 0;}
	if(N==2) {printf("%d\n",plank[0]+plank[1]); return 0;}
	sort(plank.begin(),plank.begin()+N);
	while(remain>=2)
	{
		ret=plank[0]+plank[1];
		plank.erase(plank.begin());
		plank.erase(plank.begin());
		plank.push_back(ret);
		remain--;
		sort(plank.begin(),plank.begin()+remain);
		ans+=ret; 
	}
	printf("%d\n",ans);
	return 0;
}















/*
#include <set>
#include <algorithm>
#include <iostream>
using namespace std;
 
int main()
{
	multiset<int> s;
	long long ans = 0;   //���ڱ����� 
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {//�Ѹ�����ľ�����������,����set�������Զ������� 
		int temp;
		cin >> temp;
		s.insert(temp);
	}
	multiset<int>::iterator it;
	it = s.begin();
	while(!s.empty()) { //ÿ�μ����������СԪ�صĺ͸�ֵ����ʱ����temp,
	//Ȼ��ɾ����������СԪ��,�������ǵĺ�temp�Ž�����, 
		int temp = 0;
		temp = temp + *it;
		s.erase(it);
		it = s.begin();
		temp = temp + *it;
		s.erase(it);
		it = s.begin();
		s.insert(temp);
		ans =ans + temp;  //ans����ÿһ�ε���ʱ����temp 
		if(s.size() == 2) {  
		 //��������ֻʣ������Ԫ�ص�ʱ��,��ans���������Ԫ����Ӽ�Ϊ���ս�� 
			ans = ans + *it;
			s.erase(it);
			it = s.begin();
			ans = ans + *it;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}*/


