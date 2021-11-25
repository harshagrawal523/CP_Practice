#include <iostream>
#include <string>
using namespace std;
#define int int64_t 
//harshagrawal

void solve(){
     string s;
        cin>>s;
        bool f = false;
        for(int i =0;i<s.length();i++){
            if(s[i]=='4' || s[i]=='2' || s[i]=='8' || s[i]=='6'){
                f = true;
                break;
            }
        }
        if(f == false){
            cout<<-1<<endl;
        }
        else if(s[s.length()-1]=='4' || s[s.length()-1]=='2' || s[s.length()-1]=='8' || s[s.length()-1]=='6'){
            cout<<0<<endl;
        }
        else if(s[0]=='4' || s[0]=='2' || s[0]=='8' || s[0]=='6'){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
}



int32_t main(){
    int t;
    cin>>t;
    while(t--){
       solve();
        
    }
    return 0;
}