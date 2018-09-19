/*#include<iostream>
#include<cstdio>
#include"Sales_item.h"
#include<cstdlib>

using namespace std;
int main()
{
	Sales_item book;
	int k[5];
	for(auto &w:k)
		w=20; 
	//getchar();
	for(auto c:k)
		cout<<c<<endl;
	//printf("%d\n",k[3]);
	//system("pause");
	return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
const int maxn = int(1e4) + 5;
vector<int> G[maxn], color;
int ans;
void dfs(int u) {puts("新循环");
 for (auto v : G[u]) {printf("%d\n",u);
 if (color[v] != color[u]) {
 ans++;
 }
 dfs(v);
 }
}
int main() {
 color.resize(maxn);
 int n, p;
 cin >> n;
 for (int i = 1; i < n; i++) {
 cin >> p;
 G[p-1].push_back(i);
 }
 for (int i = 0; i < n; i++) {
 cin >> color[i];
 }
 dfs(0);puts("获得答案：");
 cout << ans + 1 << endl;
}
