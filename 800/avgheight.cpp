#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>v(n,0);
        for(ll i = 0;i<n;i++){
            cin>>v[i];
        }
        vector<ll>odd;
        for(ll i = 0;i<n;i++){
            if(v[i]%2==0){
                cout<<v[i]<<" ";
            }
            else{
                odd.push_back(v[i]);
            }
        }
        for(auto x : odd){
            cout<< x <<" ";
        }
        cout<<endl;
    }
    return 0;
}