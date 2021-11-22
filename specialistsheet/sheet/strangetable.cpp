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
       int n,m,x;
    cin>>n>>m>>x;
    int a=(x-1)/n;
    int b=(x-1)%n;
    int ans=(b)*m + (a+1);
    cout<<ans<<"\n";


    }
    return 0;
}