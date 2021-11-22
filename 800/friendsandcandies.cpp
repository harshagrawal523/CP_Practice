#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll arr[n];
        ll sum = 0;
        for(int i = 0;i<n;i++){
            cin>>arr[i];
            sum = sum + arr[i];
        }
        ll tot = sum/n;
        
        ll c=0;
        if(sum%n==0){
        for(int i = 0;i<n;i++){
            if(arr[i]>tot){
                c++;
            }
            
        }
        cout<<c<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
    return 0;
}