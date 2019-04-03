#include <cstdio>
#include<iostream>
#include<cstdlib>
using namespace std;
#define N 1000000+100
int k[N];
int main()
{ int t;
  cin>>t;
  while(t--){ 
  	int n,c,i,j,s,q=1;
    cin>>n>>c;
    int a[n+100],b[n+100];
	for(i=1;i<=n;i++)	
  	  cin>>a[i];
  	for(i=1;i<=n;i++)	
  	  cin>>b[i]; 
   for(i=1;i<=n;i++)
  	 { 
  	    s=c;
  	    for(j=i;j<=n;j++)
  	     {
		   s+=a[j];
   		   if(s<0){ goto end;}
   		   s-=b[j];
   		   if(s<0){ goto end;}
	     }
  	    for(j=1;j<i;j++)
  	     {
		   s+=a[j];
   		   if(s<0){ goto end;}
   		   s-=b[j];
   		   if(s<0){ goto end;}
	     }
	     if(j==i)
	     {
		     cout<<i<<endl;q=0;
			 break;
		}
		
	     end:continue;
     }if(q)puts("-1");
  }
 return 0;
}
