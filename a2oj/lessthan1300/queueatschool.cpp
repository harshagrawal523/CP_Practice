#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

string solve(string s){
    
    char temp1,temp2;
    for(ll i =0;i<s.length();i++){
        if(s[i]=='B' && s[i+1]=='G'){
            temp1 = s[i];
            temp2 = s[i+1];
            s[i+1] = temp1;
            s[i] = temp2;
            i+=1;
        }
    }
    return s;

}

string solve_multi(string s,ll t){
    
    for(ll i = 0;i<t;i++){
        s = solve(s);
    }
    return s;
}

int main(){
    ll n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    if(t==1){
        cout<<solve(s)<<endl;
    }
    else if(t>1){
        cout<<solve_multi(s,t)<<endl;
    }
    
    
    
    return 0;
}