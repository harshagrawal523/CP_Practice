#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int mini = 2e9;
    int ind = -1;
    sort(a.begin(),a.end());
    for(int i =1;i<n;i++){
        if(abs(a[i]-a[i-1])<mini){
            mini = abs(a[i]-a[i-1]);
            ind = i;
        }
    }
    vector<int> small,big;
    for(int i =0;i<n;i++){
        if(i==ind || i==ind-1) continue;
        if(a[i]<=a[ind]){
            small.push_back(a[i]);
        }
    }
    for(int i =0;i<n;i++){
        if(i==ind || i==ind-1) continue;
        if(a[i]>a[ind]){
            big.push_back(a[i]);
        }
    }
    cout<<a[ind-1]<<" ";
  for(auto i : big) cout<<i<<" ";
    for(auto i : small) cout<<i<<" ";
    cout<<a[ind]<<" "<<"\n";
}


int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}