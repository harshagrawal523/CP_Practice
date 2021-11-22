#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    ll n,m;
    cin>>n>>m;
    ll ini = 1;
    ll ans = 0;
    for(ll i =0;i<m;i++){
        ll x;cin>>x;
        ans += ((x-ini +n)%n);
        ini = x;
    }
    cout<<ans<<endl;

    return 0;
}