#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll c=0;
    for(ll i=0;i<n;i++){
        if(s[i]==s[i+1]){
            
           
            c++;
        }

    }
    cout<<c<<endl;
    return 0;
}