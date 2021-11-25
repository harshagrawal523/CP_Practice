#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

void solve(){
     int a,b,x;
        cin>>a>>b>>x;
        if(a>b){
            swap(a,b);
        }

        while(a){
            if(x==a || x==b){
                cout<<"YES\n";
                return;
            }
            if(x>a && x<b && x%a==b%a){
                cout<<"YES\n";
                return;
            }
            b = b%a;
            swap(a,b);
        }

        cout<<"NO\n";
       
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}