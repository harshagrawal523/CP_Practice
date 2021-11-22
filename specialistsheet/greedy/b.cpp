#include <iostream>
#include <string>
#include <vector>
#include<map>
#include<unordered_map>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 
//harshagrawal

int32_t main(){
    int t;
    cin>>t;
    while(t--){
         ll x,n;cin>>x>>n;
   if(n==0){
       cout<<x<<endl;
   }
  else {ll k=n-1;
   ll c=k/4;
   ll rem=k%4;
   ll ans=x;
   if(x%2==0) {
       ans-=1;
       ans-=(c*4);
       if(rem==1) ans+=n;
       else if(rem==2) ans+=(n+n-1);
       else if(rem==3) ans+=(n-2+n-1-n);
   }
   else {
       ans+=1;
       ans+=(c*4); 
       if(rem==1) ans-=n;
       else if(rem==2) ans-=(n+n-1);
       else if(rem==3) ans-=(n-2+n-1-n);
   }
   cout<<ans<<endl;}

    }
    return 0;
}