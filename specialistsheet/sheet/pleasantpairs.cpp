#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
// #define int int64_t 

// void solve(){
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     for(int i =0;i<n;i++){
//         cin>>a[i];
//     }
//     int count=0;
//     for(int i =0;i<n;i++){
//         for(int j=i;j<n;j++){
//             if(a[i]*a[j] == (i+1) + (j+1)){
//                 count++;
//             }
//         }
//     }
//     cout<<count<<endl;
// }

int main(){
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
    int ans=0;
    vector< pair<ll,ll> > v;
    for(ll i=0;i<n;i++){ll p;cin>>p;v.push_back(make_pair(p,i+1));}
    sort(v.begin(),v.end());
    for(ll i=0;i<n;i++){
       for(ll j=i+1;j<n;j++){
          ll prod = v[i].first*v[j].first;
          if(prod>2*n) break;
          if(prod==v[i].second+v[j].second) ++ans;
       }
    }
    cout<<ans<<endl;
    }
    return 0;
}