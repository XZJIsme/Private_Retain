#include<string>
#include<iostream>
#include<map>
#include<cstdio>
#include<vector>

#include <sstream>
 
//逆波兰表达式
// #include<bits/stdc++.h>
using namespace std; 
vector<string> expression;
void split(string str){
    string res="";
    for(int i=0;;i++){
        if(str[i]==' '||str[i]=='\0'){
            expression.push_back(res);
            res="";
            if(str[i]=='\0')
                break;
            continue;
        }
        res+=str[i];  
    }
}
double solve(string x){
    // cout<<expression[0]<<endl;
    if(!expression.empty())
    {
        expression.erase(expression.begin());
        // cout<<"expression[0]"<<expression[0]<<endl;
        // for(auto i:expression){
        //     cout<<i<<endl;
        // }
    }
    if(x[0]=='+'){
        // cout<<expression[0]<<endl;
        double a= solve(expression[0]);
        // cout<<"a="<<a<<endl;
        // int b= ;
        // cout<<"b="<<b<<endl;
        return a+solve(expression[0]);
    }    
    else if(x[0]=='-')
        return solve(expression[0])-solve(expression[0]);
    else if(x[0]=='*')
        return solve(expression[0])*solve(expression[0]);
    else if(x[0]=='/')
        return solve(expression[0])/solve(expression[0]);
    else
    {
        // cout<<expression[0]<<endl;   
        istringstream iss(x);
        double ret;
        iss>>ret;
         return ret; 
         }
}
int main(){ 
    string input;
    getline(cin,input,'\n'); 
    split(input);   
    // system("pause");
    printf("%f\n",solve(expression[0]));  
    return 0;
}




