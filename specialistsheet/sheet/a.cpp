#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;


int main(){
    int t;cin>>t;
    while(t--){
       ll n,H;cin>>n>>H;
        
        
        int a[n];
        
        for(int i = 0 ; i<n ; i++)
        {
            
            cin>>a[i];
            
        }
        
        sort(a , a+n);
        
        int w1 = a[n-1];
        int w2 = a[n-2];
        
        ll ans = 0;
        
        ll s = w1+w2;
        
        ans = H/s;
        ans=ans*2;
        
        
        bool b = false;
        
        ll rem = H%s;
        
        while(rem>0){
            if(b == false){
                rem -= w1;
                b = true;
            }
            else{
                rem -= w2;
                 b = false;;
            }
            ans++;
        }
        
        cout<<ans<<endl;


    }
    return 0;
}