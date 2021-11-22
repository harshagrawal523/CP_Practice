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
        int l,r;
        cin>>l>>r;
        
        int c = r/2;
        c = c+1;
        int ans;
        if(l==r){
            cout<<0<<endl;
        }
        else if(l>=c){
            ans = r%l;
            cout<<ans<<endl;
        }
        else{
            ans = r%c;
            cout<<ans<<endl;
        }
        
    }
    return 0;
}