#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> ans;
    string a,b;
    a=
"dnfjankjasndkjsandkjasndjksadiowejeiowqrjiowehfuyveiwgbdhsjbweuhfsiuhdsuiagfirwegfjskncmzbihqfhejiw";
    b=
"hjdkshfjkdshfiewhiuwehkjzdbcnmzbuiahfowfjowpeworipjpklamdfsjndknckjsahgfoiuqqepwqrpwqpreidozdhjcosd";
    for(int i=0;i<a.length();i++)
        for(int j=0;j<b.length;j++)
            if(a[i]==a[j])
                for(int i1=i,j1=j;i1<a.length()&&j1<=b.length();i1++,j1++)
    return 0;

    
}