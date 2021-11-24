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
        int k,x;
        cin>>k>>x;
        
        int ans = 0;

        int l = 0 , r = 2*k-1;
        int total = k*k;
        

        while(l<=r){
            int mid = (l+r)/2;
            int req = 0;

            if(mid>k){
                int dif = mid -k;
                int val = k - dif;
                req = total - (val*(val+1))/2 ;
            }
            else{
                req = (mid*(mid-1))/2 ;
            }

            if(x>req){
                ans = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }


        }
        cout<<ans<<endl;
    }
    return 0;
}