#include <iostream>
#include <string>
#include<math.h>
using namespace std;
typedef long long ll;


bool isPerfectSquare(ll x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0) {
 
        long long sr = sqrt(x);
         
        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        bool ans = false;
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i =0;i<n;i++){
            cin>>arr[i];
        
            if(! isPerfectSquare(arr[i])){
                ans = true;
            }
            
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}