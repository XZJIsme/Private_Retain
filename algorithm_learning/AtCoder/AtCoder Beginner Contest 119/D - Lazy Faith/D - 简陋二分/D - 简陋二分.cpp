#include<bits/stdc++.h>
using namespace std;
using ll=long long;
ll bisect(ll *to_search,ll l,ll r,ll r_max,ll num){
    if(num>to_search[r_max]) return r_max;
    if(num<to_search[0]) return 0;
    if(r-l<=5){
        ll ret=LLONG_MAX;
        for(ll i=l;i<=r;i++){
            if(to_search[i]<=num) ret=i;
        }
        if(ret+1!=r_max+1)
            if(num-to_search[ret]>to_search[ret+1]-num){
                return ret+1;
            } 
        return ret;
    }
    if(num>=to_search[(l+r)/2]){
        return bisect(to_search,(l+r)/2,r,r_max,num);
    }
    else return bisect(to_search,l,(l+r)/2,r_max,num);
}
int main(){
    ll to_search[500000];    
    for(ll i=0;i<50000;i++){
        to_search[i]=rand();
    } 
    sort(to_search,to_search+50000);
    cout<<to_search[49999]<<endl;
    cout<<to_search[bisect(to_search,0,50000-1,50000-1,INT_FAST32_MAX)];
    return 0;
}

//这个关于STL中二分的讲解不错
//https://www.geeksforgeeks.org/binary-search-functions-in-c-stl-binary_search-lower_bound-and-upper_bound/