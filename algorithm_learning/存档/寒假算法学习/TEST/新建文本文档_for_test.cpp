#include    <iostream>
using namespace std;
void solve(){long long num_0=0,num_2=0,num_4=0,n,input,last=0,ans=0;cin>>n; getchar();for(int i=0;i<n;i++){cin>>input;if(input==0) num_0++; if(input==2) num_2++; if(input==4) num_4++;  } getchar();if(num_0==n){
        cout<<"0";
        return;
    }
    while(!(num_0==0&&num_2==0&&num_4==0)){////cout<<last<<" ";;;;;          
        if(last==0)
        {
            if(num_4!=0){
                num_4--;
                ans+=16;
                last=4;
            }
            else if(num_2!=0){
                num_2--;
                ans+=4;
                last=2;
            }
            continue;
        }
        if(last==4){
            if(num_0!=0){
                num_0--;
                ans+=16;
                last=0;
            }
            else if(num_2!=0){
                num_2--;
                ans+=4;
                last=2;
            }
            else{
                cout<<ans;
                return;
            }
            continue;
        }
        if(last==2)
        {if(num_0!=0){
                num_0--;
                ans+=4;
                last=0;
            }
            else if(num_4!=0)
            {num_4--;ans+=4;last=4;;;;;;;;}
              
            else{
                cout<<ans;
                return;
            }
        }
    }
    cout<<ans;
    return;
}
int main(){
     {
         solve();
        cout<<endl;
    }
    // int num_0=0,num_2=0,num_4=0,n,input,last=0,ans=0;
    // cin>>n; getchar();
    // for(int i=0;i<n;i++){
    //  cin>>input;
    //  if(input==0) num_0++; if(input==2) num_2++; if(input==4) num_4++;  
    // } getchar();
    // if(num_0==n){
    //  cout<<"0";
    //  return 0;
    // }
    // while(!(num_0==0&&num_2==0&&num_4==0)){
    //  if(last==0)
    //  {
    //      if(num_4!=0){
    //          num_4--;
    //          ans+=16;
    //          last=4;
    //      }
    //      else if(num_2!=0){
    //          num_2--;
    //          ans+=4;
    //          last=2;
    //      }
    //      continue;
    //  }
    //  if(last==4){
    //      if(num_0!=0){
    //          num_0--;
    //          ans+=16;
    //          last=0;
    //      }
    //      else if(num_2!=0){
    //          num_2--;
    //          ans+=4;
    //          last=2;
    //      }
    //      else{
    //          cout<<ans;
    //          return 0;
    //      }
    //      continue;
    //  }
    //  if(last==2)
    //  {
    //      if(num_0!=0){
    //          num_0--;
    //          ans+=4;
    //          last=2;
    //      }
    //      else{
    //          cout<<ans;
    //          return 0;
    //      }
    //  }
    // }
    // cout<<ans;
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    ;
    ;
    ;
    ;
    ;
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
     
     
     
     
     
     
    ;;;;;;;;;;;;;;;;;
     
     
     
     
     
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
     
     
     
     
    ;;;;;;;;;;
    ;
    ;
    ;
    ;
    ;
    ; return 0;
 
 
 
 
 
 
 
 
 
    //////////
 
 
 
 
 
 
 
 
 
 
 
 
    ///////////////////////为什么大佬那么NB！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！
 
/////////////////////////////////////////////////////*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
/*
 
 
 
 
                         
 
 
   _________  _____________    ____.__                      
  / ___ \   \/  /\____    /   |    |__| ______ _____   ____ 
 / / ._\ \     /   /     /    |    |  |/  ___//     \_/ __ \
<  \_____/     \  /     /_/\__|    |  |\___ \|  Y Y  \  ___/
 \_____\/___/\  \/_______ \________|__/____  >__|_|  /\___  >
              \_/        \/                \/      \/     \/
 
 
 
 
  
 
 
 ___    ___ ________        ___  ___  ________  _____ ______   _______     
|\  \  /  /|\_____  \      |\  \|\  \|\   ____\|\   _ \  _   \|\  ___ \    
\ \  \/  / /\|___/  /|     \ \  \ \  \ \  \___|\ \  \\\__\ \  \ \   __/|   
 \ \    / /     /  / /   __ \ \  \ \  \ \_____  \ \  \\|__| \  \ \  \_|/__ 
  /     \/     /  /_/__ |\  \\_\  \ \  \|____|\  \ \  \    \ \  \ \  \_|\ \
 /  /\   \    |\________\ \________\ \__\____\_\  \ \__\    \ \__\ \_______\
/__/ /\ __\    \|_______|\|________|\|__|\_________\|__|     \|__|\|_______|
|__|/ \|__|                             \|_________|                       
                                                                             
                                                                             
 
 
 
                                                                             
 
 
 
                                                                     
 
 
 
 
 
 
 
*/
}



































// #include<iostream>
// using namespace std;

// long long bigger(long long a,long long b){
// 	if(a>b) return a;else return b;
// }


// long long solve1(long long num_0,long long num_2,long long num_4,long long n,long long input,long long last,long long ans){
// 	;
	 
// 	if(num_0==n){ 
// 		return 0;
// 	}
// 	while(!(num_0==0&&num_2==0&&num_4==0)){
// 		if(last==0)
// 		{
// 			if(num_4!=0){
// 				num_4--;
// 				ans+=16;
// 				last=4;
// 			}
// 			else if(num_2!=0){
// 				num_2--;
// 				ans+=4;
// 				last=2;
// 			}
// 			continue;
// 		}
// 		if(last==4){
// 			if(num_0!=0){
// 				num_0--;
// 				ans+=16;
// 				last=0;
// 			}
// 			else if(num_2!=0){
// 				num_2--;
// 				ans+=4;
// 				last=2;
// 			}
// 			else{ 
// 				return ans;
// 			}
// 			continue;
// 		}
// 		if(last==2)
// 		{if(num_0!=0){
// 				num_0--;
// 				ans+=4;
// 				last=2;
// 			}
			
// 			else if(num_4!=0)
// 			{num_4--;ans+=4;last=4;;;;;;;;} 
// 			else{ 
// 				return ans;
// 			}
// 		}
// 	} 
// 	return ans;
// }




// long long solve(){
// 	long long num_0=0,num_2=0,num_4=0,n,input,last=0,ans=0;
// 	cin>>n; getchar();
// 	for(int i=0;i<n;i++){
// 		cin>>input;
// 		if(input==0) num_0++; if(input==2) num_2++; if(input==4) num_4++;	
// 	} getchar();
// 	if(num_0==n){ 
// 		return 0;
// 	} long long ans2=solve1(num_0,num_2,num_4,n,input,last,ans);
// 	while(!(num_0==0&&num_2==0&&num_4==0)){
// 		if(last==0)
// 		{
// 			if(num_4!=0){
// 				num_4--;
// 				ans+=16;
// 				last=4;
// 			}
// 			else if(num_2!=0){
// 				num_2--;
// 				ans+=4;
// 				last=2;
// 			}
// 			continue;
// 		}
// 		if(last==4){
// 			if(num_0!=0){
// 				num_0--;
// 				ans+=16;
// 				last=0;
// 			}
// 			else if(num_2!=0){
// 				num_2--;
// 				ans+=4;
// 				last=2;
// 			}
// 			else{ 
// 				return bigger(ans,ans2);;;;;;;;;;;
// 			}
// 			continue;
// 		}
// 		if(last==2)
// 		{if(num_4!=0)
// 			{num_4--;ans+=4;last=4;;;;;;;;}
			
// 			else if(num_0!=0){
// 				num_0--;
// 				ans+=4;
// 				last=2;
// 			}
// 			else{ return bigger(ans,ans2);;;;
// 			}
// 		}
// 	} return bigger(ans,ans2);;;;
// }







// int main(){
// 	 {
// 		  cout<<solve(); 
// 		cout<<endl;
// 	}
// 	// int num_0=0,num_2=0,num_4=0,n,input,last=0,ans=0;
// 	// cin>>n; getchar();
// 	// for(int i=0;i<n;i++){
// 	// 	cin>>input;
// 	// 	if(input==0) num_0++; if(input==2) num_2++; if(input==4) num_4++;	
// 	// } getchar();
// 	// if(num_0==n){
// 	// 	cout<<"0";
// 	// 	return 0;
// 	// }
// 	// while(!(num_0==0&&num_2==0&&num_4==0)){
// 	// 	if(last==0)
// 	// 	{
// 	// 		if(num_4!=0){
// 	// 			num_4--;
// 	// 			ans+=16;
// 	// 			last=4;
// 	// 		}
// 	// 		else if(num_2!=0){
// 	// 			num_2--;
// 	// 			ans+=4;
// 	// 			last=2;
// 	// 		}
// 	// 		continue;
// 	// 	}
// 	// 	if(last==4){
// 	// 		if(num_0!=0){
// 	// 			num_0--;
// 	// 			ans+=16;
// 	// 			last=0;
// 	// 		}
// 	// 		else if(num_2!=0){
// 	// 			num_2--;
// 	// 			ans+=4;
// 	// 			last=2;
// 	// 		}
// 	// 		else{
// 	// 			cout<<ans;
// 	// 			return 0;
// 	// 		}
// 	// 		continue;
// 	// 	}
// 	// 	if(last==2)
// 	// 	{
// 	// 		if(num_0!=0){
// 	// 			num_0--;
// 	// 			ans+=4;
// 	// 			last=2;
// 	// 		}
// 	// 		else{
// 	// 			cout<<ans;
// 	// 			return 0;
// 	// 		}
// 	// 	}
// 	// }
// 	// cout<<ans;
// 	;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// 	;
// 	;
// 	;
// 	;
// 	;
// 	;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	
	
	
	
	
	
// 	;;;;;;;;;;;;;;;;;
	
	
	
	
	
// 	;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
	
	
	
	
// 	;;;;;;;;;;
// 	;
// 	;
// 	;
// 	;
// 	;
// 	; return 0;









// 	//////////












// 	///////////////////////为什么大佬那么NB！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！！

// /////////////////////////////////////////////////////*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
// /*




                        


//    _________  _____________    ____.__                       
//   / ___ \   \/  /\____    /   |    |__| ______ _____   ____  
//  / / ._\ \     /   /     /    |    |  |/  ___//     \_/ __ \ 
// <  \_____/     \  /     /_/\__|    |  |\___ \|  Y Y  \  ___/ 
//  \_____\/___/\  \/_______ \________|__/____  >__|_|  /\___  >
//               \_/        \/                \/      \/     \/ 




 


//  ___    ___ ________        ___  ___  ________  _____ ______   _______      
// |\  \  /  /|\_____  \      |\  \|\  \|\   ____\|\   _ \  _   \|\  ___ \     
// \ \  \/  / /\|___/  /|     \ \  \ \  \ \  \___|\ \  \\\__\ \  \ \   __/|    
//  \ \    / /     /  / /   __ \ \  \ \  \ \_____  \ \  \\|__| \  \ \  \_|/__  
//   /     \/     /  /_/__ |\  \\_\  \ \  \|____|\  \ \  \    \ \  \ \  \_|\ \ 
//  /  /\   \    |\________\ \________\ \__\____\_\  \ \__\    \ \__\ \_______\
// /__/ /\ __\    \|_______|\|________|\|__|\_________\|__|     \|__|\|_______|
// |__|/ \|__|                             \|_________|                        
                                                                            
                                                                            



																			



																	







// */
// }