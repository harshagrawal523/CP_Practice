#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        map<int,int> mp;
        for(int i =0;i<n;i++){
            int x;cin>>x;
            mp[x-i]++;

        }
        int total=0;
        for(auto i: mp){
            total += (i.second)*(i.second - 1) / 2;
        }
        cout<<total<<endl;
       
            
        
    }
    return 0;
}