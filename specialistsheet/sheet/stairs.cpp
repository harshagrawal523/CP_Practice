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
        int x;
        cin>>x;
        int n = 1;
        int ans = 0;
        int stair = 1;
        while(x-n>=0){
            x = x-n;
            ans++;
            stair = stair*2 + 1;
            n = stair*(stair+1) / 2;

        }
        cout<<ans<<endl;
    }
    return 0;
}