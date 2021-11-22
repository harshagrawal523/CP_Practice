#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

bool isPalan(string s){
    
    int flag = 0;
    int length = s.length() ;
    for(int i=0;i < length ;i++){
        if(s[i] != s[length-i-1]){
            flag = 1;
            break;
        }
    }
    if(flag){
        return false;
    }
    else{
        return true;
    }
   
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        bool all_a = true;
        for(int i = 0;i<s.length();i++){
            if(s[i]!='a'){
                all_a = false;
            }
        }
        if(all_a){
            cout<<"No"<<endl;
        }
        else if(!isPalan('a'+s)){
            cout<<"YES"<<endl;
            cout<<('a'+s)<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<(s+'a')<<endl;
        }
    }
   
    return 0;
}