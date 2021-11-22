#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 
//harshagrawal



int32_t main(){
    int t;
    cin>>t;
    while(t--){
         string s;
        cin>>s;
        int i;
        int ans = 0,fin_ans=0,count= 0;
        if(s=="0"){
            cout<<0<<endl;
            
        }
        
        else{for(i = s.size()-1;i>=0;i--){
            if(s[i]=='0'){
                break;
            }
            count++;
            
        }
        for(i = i-1 ; i>=0;i--){
            if(s[i]=='0' || s[i]=='5'){
                break;
            }
            count++;
        }
        fin_ans = count;
        count = 0;
        for(i= s.size()-1;i>=0;i--){
            if(s[i]=='5'){
                break;
            
            }
            count++;
        }
         for(i = i-1 ; i>=0;i--){
            if(s[i]=='2' || s[i]=='7'){
                break;
            }
            count++;
        }
        if(fin_ans>count){
            fin_ans= count;

        }
        cout<<fin_ans<<endl;}

        
    }
    return 0;
}