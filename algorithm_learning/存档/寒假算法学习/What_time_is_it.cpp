#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
string number[]=
{" _ | ||_|","     |  |"," _  _||_ "," _  _| _|", "   |_|  |"," _ |_  _|"," _ |_ |_|"," _   |  |"," _ |_||_|"," _ |_| _|"}; 
bool lcd_num_cmp(string a,string b){
    for(int i=0;i<9;i++){
        if(a[i]!=' '&&a[i]!=b[i]) return false;
    } return true;
}
int *possible_number(string str){
    int ret[10],t=0;
    for(int i=0;i<10;i++){
         if(lcd_num_cmp(str,number[i]))
            ret[t++]=i;
    }
    ret[t]=-1;
    return ret;
}
void solve(){
    string input,left_lcd[]={"","","",""},right_lcd[]={"","","",""};
    for(int i=0;i<3;i++){
        getline(cin,input);  
        int j=0;
        for(int k=0;k<4;k++){
            for(int l=0;l<3;l++){
                left_lcd[k]+=input[j++];
            }
        }
        for(int k=0;k<4;k++){
            for(int l=0;l<3;l++){
                right_lcd[k]+=input[j++];
            }
        }
    }
    int **left={possible_number(left_lcd[0]),possible_number(left_lcd[1]),possible_number(left_lcd[2]),possible_number(left_lcd[3])};
    int **right={possible_number(right_lcd[0]),possible_number(right_lcd[1]),possible_number(right_lcd[2]),possible_number(right_lcd[3])};
    
    return;
}
int main(int argc,char const *argv[]){
    int t_cases;
    cin>>t_cases; getchar();
    while(t_cases--) solve();
    return 0;
}