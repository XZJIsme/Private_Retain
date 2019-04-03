#include<bits/stdc++.h>
using namespace std;
char s[1000000];
int abstract(int a){if(a<0) return -a;
else return a;
}
int main(){
	int T,N,i,m,ans;
	char z;
	cin>>T;
	while(T--){
		cin>>N>>z;
		scanf("%s",s);
		for(ans=0,i=0;i<N;i++){
			m=abstract((int)z-s[i]);
			if(m==0||(m>=10&&m<100)) ans+=2;
			else if(m<10&&m>0) ans++;
			if(m>=100&&m<1000) ans+=3;
		}cout<<ans<<endl;
	}
	return 0;
}
