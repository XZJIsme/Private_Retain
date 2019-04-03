#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<algorithm>
using namespace std;
int perm[100000], n; 
bool used[100000];
void permutation1(int pos, int n) {
	if (pos == n) {
		for (int i = 0; i < n; i++)
			cout << perm[i] + 1 << ' ';
		printf("\n");
		return;
	}
	for (int i = 0; i < n; i++) {
		if (!used[i]) {
			perm[pos] = i;
			used[i] = true;
			permutation1(pos + 1, n);
			used[i] = false;
		}
	} return;
}
int main() {
	cin >> n; 
	permutation1(0, n); 
	system ("pause");
	return 0;
}