#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

void solve(){
    int n;cin>>n;
    vector<int>b(n+2);
    for(int i =0;i<n+2;i++){
        cin>>b[i];
    }
    sort(b.begin(),b.end());
    int sum = 0;
    for(int i =0;i<n;i++){
        sum += b[i];
    }
    
    
    
    // cout<<sum<<endl;
    if(sum!=b[n-1] && sum!=b[n]){
        cout<<-1<<endl;
    }
    
    else {
        for(int i =0;i<n;i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }

}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}