#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	char s[100+50];
	int A=0,B=0;
	scanf("%s",s);
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]=='L')
			if(s[i+1]=='S')
				if(s[i+2]=='C')
					A++;
		if(s[i]=='P')
			if(s[i+1]=='C')
				if(s[i+2]=='M')
					if(s[i+3]=='S')
						B++;
	}
	if(A>B)
		cout<<"LSC"<<endl;
	if(A<B)
		cout<<"PCMS"<<endl;
	if(A==B)
		cout<<"Tie"<<endl;
	return 0;
}
