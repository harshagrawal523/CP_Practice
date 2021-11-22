#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int n,s,t;
    cin>>n>>s>>t;
    int arr[n];
    for(int i = 1;i<=n;++i){
        cin>>arr[i];
        // arr[i] = i+1;
    }
    int step=0;
    while(s!=t && arr[s]!=0){
        int temp = arr[s];
        arr[s] = 0;
        s = temp;
        step+=1;
    }
   printf("%lld\n", s == t ? step : -1);
    return 0;
}