#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;


 void solve (){
            ll n,k;
            cin>>n>>k;
            vector<ll>a(n);
            ll sum=0;
            for(int i=0;i<n;i++){
                cin>>a[i];
            }
            ll l=0,r=1e14;
            while(l<r){
                ll mid=(l+r)/2;
                ll sum=a[0]+mid;
                bool ok=true;
                for(int i=1;i<n;i++){
                    ll x=sum*k/100;
                    if(a[i]>x){
                        ok=false;
                        break;
                    }
                    sum+=a[i];
                }
                if(ok) r=mid;
                else l=mid+1;
            }
            cout<<l<<"\n";
        }

int main(){
    int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";
                solve();
            }
            
    
    return 0;
}