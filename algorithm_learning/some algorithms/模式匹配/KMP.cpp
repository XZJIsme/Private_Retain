#include<bits/stdc++.h>
using namespace std;
//���ַ����в���ָ���ַ����ĵ�һ�γ��֣������ҵ��򷵻�-1      
int strstr(char *S, char *T)      
{     
	if (S == NULL || T == NULL)        
		return -1;        
 
	int lenstr = strlen(S);     
	int lensub = strlen(T);     
 
	if (lenstr < lensub)        
		return -1;         
 
	int len = lenstr - lensub;  
	int i,j;
	for (i = 0; i <= len; i++)   //���Ӷ�ΪO(m*n)     
	{     
		for (j = 0; j < lensub; j++)     
		{     
			if (S[i+j] != T[j])     
				break;     
		}     
		if (j == lensub)     
			return i + 1;     
	}     
	return -1;     
}    

int main()
{
    char a[]="qwretfyjgkhljjk";
    char b[]="ret";
    cout<<strstr(a,b);
    return 0;
}