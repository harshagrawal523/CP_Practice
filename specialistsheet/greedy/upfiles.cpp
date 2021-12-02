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
        int n,k,res=0,updated=1;
         cin>>n>>k;
         while(updated<k)
         {
             res++;
             updated*=2;
         }
         if(updated<n)
         cout<<res +(n-updated+k-1)/k<<endl;
         else
         cout<<res<<endl;
    }
    return 0;
}