#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>  
using namespace std;
typedef long long ll;
#define int int64_t

int32_t main(){
    int n,l;
    cin>>n>>l;
    double arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    double ans =0;
    ans = max(ans,arr[0]);
    ans = max(ans,l-arr[n-1]);
    for(int i =0;i<n-1;i++){
        double dis = arr[i+1]-arr[i];
        dis /=(2.00);
        ans = max(ans,dis);
    }
    cout<<fixed<<setprecision(9)<<ans<<endl;

    
    return 0;
}