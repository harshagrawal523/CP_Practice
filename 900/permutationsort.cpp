#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
        cin>>n;
        ll arr[n];
        for(ll i =0;i<n;i++){
            cin>>arr[i]; 
            arr[i]--;
        }
        bool flag = true;
        for(ll i =0;i<n;i++){
            if(arr[i]!=i) flag = false ;
        }
        if(flag == true){
            cout<<0<<endl;
            return;
            
        }
        else if(arr[0]==0 || arr[n-1]==n-1){
            cout<<1<<endl;
        }
        else if(arr[0]==n-1 && arr[n-1]==0){
            cout<<3<<endl;
        }
        else{
            cout<<2<<endl;
        }
}

int main(){
    ll t;
    cin>>t;
    while(t--){
       solve();
    }
    return 0;
}