#include <iostream>
using namespace std;
#define int int64_t 
//harshagrawal
int32_t main(){
    
         int t;
    cin>>t;
    while(t--){
       int a,b,c;
       cin>>a>>b>>c;
       int af = max(0LL,1+max(b,c)-a);
       int bf =  max(0LL,1+max(a,c)-b);
        int cf =  max(0LL,1+max(b,a)-c);

        cout << af << " " <<bf << " " << cf<< "\n";

      
    }
    return 0;


}