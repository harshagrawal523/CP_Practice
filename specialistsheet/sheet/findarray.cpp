#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n,1);
    int sumo=0,sume=0;
    for(int i =0;i<n;i++){
        cin>>a[i];
        if((i+1)%2==0){
            sume+=a[i];
        }
        else{
            sumo +=a[i];
        }
        
    }
    if(sumo>=sume){
        for(int i =0;i<n;i++){
        if(i%2==0){
            b[i] = a[i];
        }
        
    }
    }
    else
    {for(int i =0;i<n;i++){
        if((i+1)%2==0){
            b[i] = a[i];
        }
        
    }}
    for(auto i : b){
        cout<<i<<" ";
    }
    cout<<endl;

    
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}