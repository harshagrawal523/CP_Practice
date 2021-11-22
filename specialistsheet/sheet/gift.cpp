#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

void solve(){
                    int n,m;
                    cin>>n>>m;
                    vector<ll>k(n);
                    vector<ll>c(m);
                    for(int i=0;i<n;i++) cin>>k[i];
                    for(int i=0;i<m;i++) cin>>c[i];
                    sort(k.begin(),k.end(),greater< >());
                    ll total=0;
                    int j=0;
                    for(int i=0;i<n;i++){
                        if(j<m){
                            if(c[j]<c[k[i]-1]){
                                total+=c[j];
                                j++;
                            }
                            else{
                                total+=c[k[i]-1];
                            }
                        }
                        else{
                            total+=c[k[i]-1];
                        }
                    }
                    cout<<total<<"\n";
                 }



int32_t main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}