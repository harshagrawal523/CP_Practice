#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 
//harshagrawal

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(k);
        for(int i =0;i<k;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int ans = 0,time=0,req=0;
        for(int i =k-1;i>=0;i--){
            if(time>=a[i]){
                break;
            }
            req = n-a[i];
            ans++;
            time +=req;
        }
        cout<<ans<<endl;
    }
    return 0;
}