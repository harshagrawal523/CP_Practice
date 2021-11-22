#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int s= 0;int e = 0;
    int ans =0,sum=0;
    for(int i =0;i<n;i++){
        if(sum+arr[i]>t){
            while(s<i && sum+arr[i]>t){
                sum -=arr[s];
                s++;
            }
            
        }
        sum+=arr[i];
        if(sum<=t){
            ans = max(ans,i-s+1);
        }
    }
    cout<<ans<<"\n";
    return 0;
}