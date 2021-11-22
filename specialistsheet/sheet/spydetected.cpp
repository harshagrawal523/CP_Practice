#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        map<int,int> mp;
        for(int i =0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        for(int i = 0;i<n;i++){
            if(mp[a[i]]==1){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}