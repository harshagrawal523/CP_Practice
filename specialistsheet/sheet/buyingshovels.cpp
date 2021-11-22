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
        int n,k;
        cin>>n>>k;
        int mini = INT64_MAX;
        for(int i =1;i*i<=n;i++){
            if(n%i==0 && i<=k){
                mini = min(mini,n/i);
            }
            if(n%i==0 && n/i<=k){
                mini = min(mini,i);
            }

        }
        cout<<mini<<endl;

    }
    return 0;
}