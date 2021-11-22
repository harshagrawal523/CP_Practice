#include <iostream>
#include <string>
#include <cmath>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2050!=0){
            cout<<-1<<endl;
        }
        else{
            ll ans = 0;
            n=n/2050;
            while(n!=0){
                ans = ans + n%10;
                n = n/10;
            }
            cout<<ans<<endl;

        }
    }
    return 0;
}