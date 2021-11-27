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
        int n,l,r,k;
        cin>>n>>l>>r>>k;
        vector<int> p;
        for(int i =0;i<n;i++){
            int x;
            cin>>x;
            if(x<=r && x>=l){
                p.push_back(x);
            }

        }
        sort(p.begin(),p.end());
        int sum = 0;
        int ans = 0;
        
        for(int i = 0;i<p.size();i++){
            // cout<<p[i]<<endl;
            if(sum+p[i]<=k){
                sum+=p[i];
                ans++;
            }
            else{
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}