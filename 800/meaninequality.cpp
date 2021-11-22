#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        n=n*2;
        ll arr[n];
        for(ll i = 0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll start = 0;
        ll end = n-1;
        while(start<end){
            cout<<arr[start++]<<" ";
            if(start>end){
                break;
            }
            cout<<arr[end--]<<" ";
             if(start>end){
                break;
            }
        }
        cout<<endl;
    }    
    return 0;
}