#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
typedef long long ll;


void solve(){
    ll n;
    cin>>n;
    vector<ll> a,even,odd;
    for(ll i =0;i<n;i++){
        ll x;
        cin>>x;
        if(x%2==0) even.push_back(x);
        else odd.push_back(x);
    }
    for(auto i : even) a.push_back(i);
    for(auto i: odd) a.push_back(i);
    int tot = 0;
    for(ll i = 0;i<n;i++){
        for(ll j = i+1;j<n;j++){
            if(__gcd(a[i],2*a[j])>1) tot++;
        }
    }
    cout<<tot<<endl;

}



int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}