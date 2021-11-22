#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin>>s;
    for(ll i = 0;i<s.length();i++){
        if(s[i]=='-' && s[i+1]=='.'){
            cout<<1;
            i+=1;
        }
        else if(s[i]=='-' && s[i+1]=='-'){
            cout<<2;
            i+=1;
        }
        else{
            cout<<0;
        }

    }
    cout<<endl;
    return 0;
}   