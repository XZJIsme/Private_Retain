#include <iostream>
using namespace std;
void solve(){
	int num_0=0,num_2=0,num_4=0,n,input,last=0,ans=0;
	cin>>n; getchar();
	for(int i=0;i<n;i++){
		cin>>input;
		if(input==0) num_0++; if(input==2) num_2++; if(input==4) num_4++; 
	} getchar();
    while(!(num_0==0&&num_2==0&&num_4==0)){        
        if(last==0) {
            if(num_4!=0){num_4--; ans+=16; last=4;}
            else if(num_2!=0){num_2--; ans+=4; last=2;} continue;
        }
        if(last==4) {
            if(num_0!=0){num_0--; ans+=16; last=0;}
            else if(num_2!=0) {num_2--; ans+=4; last=2;}
            else {cout<<ans; return;} continue;
        }
        if(last==2) {
			if(num_0!=0) {num_0--;ans+=4;last=0;}
            else if(num_4!=0) {num_4--;ans+=4;last=4;}
            else {cout<<ans;return;}
        }
    }
    cout<<ans;
    return;
}
int main() {solve(); cout<<endl;}