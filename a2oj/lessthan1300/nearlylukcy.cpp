#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    ll count = 0;
    while(n>0){
        ll x;
        x = n%10;
        n = n/10;
        if(x==4 || x==7){
            count++;
        }
    }
    if(count == 4 || count ==7){
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO"<<endl;
        // cout<<n;
    }
    return 0;
}