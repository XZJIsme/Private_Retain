#include<bits/stdc++.h>
using namespace std;
int main()
{
	map<string,pair<int,int>> test;
	map<string,pair<int,int>>::iterator it;
	string a,b;
	getline(cin,a,'\n');
	getline(cin,b,'\n');
	test[a].first=10;
	test[a].second=20;
	test[b].second=30;
	printf("%d\n\n",test[a].second);
	it=test.begin();
	for(;it!=test.end();it++)
	{
		printf("%d\n",(it->second).second-(it->second).first);
	}
}
/*int main()
{
	map<string,int> word_count;
	string word;
	while(cin>>word)
	{
		++word_count[word];
	}
	for(auto &w:word_count)
	{
		cout<<w.first<<" occurs "<<w.second<<((w.second>1?" times":" time"))<<";\n";
	}
	return 0;
} */
// map::at
/*#include <iostream>
#include <string>
#include <map>

int main ()
{
  std::map<std::string,int> mymap = {
                { "516", 0 },
                { "beta", 0 },
                { "gamma", 0 } };

  mymap ["516"] = 10;
  mymap ["beta"] = 20;
  mymap ["gamma"] = 30;

  for (auto& x: mymap) {
    std::cout << x.first << ": " << x.second << '\n';
  }

  return 0;
}*/
