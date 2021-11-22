#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int n;
    cin>>n;
    int ans = n+n-1;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];

    }
    ans+=arr[0];
    for(int i =0;i<n-1;i++){
        ans += abs(arr[i+1]-arr[i]);
    }
    cout<<ans<<"\n";
    
    return 0;
}