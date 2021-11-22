#include <iostream>
#include <string>
#include <vector>
#include<map>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 


void solve(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sum*=2;
    if(sum%n!=0){
        cout<<0<<endl;
        return;
    }
    sum/=n;
    int ans=0;
    for(int i=0;i<n;i++){
        int x=sum-arr[i];
        ans+=m[x];
        m[arr[i]]++;
    }
    cout<<ans<<endl;
 
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}