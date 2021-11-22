#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int t;
	cin>>t;
	
	while(t--){
 
      int n;
      cin>>n;
      
      string s;
      cin>>s;
      
      string ans1 = "";
      string ans2 = "";
      
      bool bit = false;
      
      for(int i = 0 ; i<s.length() ; i++){
          
          if(s[i] == '0'){
              ans1 += '0';
              ans2 += '0';
          }else if(s[i] == '1'){
              if(bit){
                 ans1 += '0';
              ans2 += '1'; 
              }else{
              ans1 += '1';
              ans2 += '0';
              }
              bit = true;
          }else{
                if(bit){
                  ans1 += '0';
                  ans2 += '2';
                }else{
                  ans1 += '1';
                  ans2 += '1';  
                }
             
              
          }
          
      }
      
      cout<<ans1<<endl;
      cout<<ans2<<endl;
      
    }
 
    return 0;
}
 