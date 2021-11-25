#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;cin>>n;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int res = arr[0];
        for(int i =0;i<n;i++){
            arr[i] -= sum;
            sum+=arr[i];
        }
        for(int i =0;i<n;i++){
            res = max(res,arr[i]);
        }
        cout<<res<<endl;

       
    
    }
    return 0;
}