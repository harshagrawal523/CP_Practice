#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int n;
        cin>>n;
        
        map<int,int> mp;
        map<int,int> rot;
        
        int a[n],b[n];
        
        int ans = 0;
        
        for(int i = 0 ; i<n ; i++){
            cin>>a[i];
        }
        for(int i = 0 ; i<n ; i++){
            cin>>b[i];
            mp[b[i]] = i;
        }
        
        for(int i = 0 ; i<n ; i++){
            
            int ib = mp[a[i]];
            
            if(ib == i){
                rot[0]++;
                ans = max(rot[0] , ans);
            }else if(ib > i){
                int k1 = ib - i;
                int k2 = i+n-ib;
                
               rot[k1]++;
               rot[-k2]++;
               
               ans = max({rot[k1] , rot[-k2] , ans});
                
            }else{
                
                int k1 = ib + n - i;
                int k2 = i - ib;
                
                rot[k1]++;
                rot[-k2]++;
                
                  ans = max({rot[k1] , rot[-k2] , ans});
                
            }
            
        }
        
     
       cout<<ans<<endl;
    return 0;
}