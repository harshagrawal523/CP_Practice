#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    ll t;cin>>t;
    while(t--){
        ll x; cin>>x;
        if(x%10==x){
            cout<<x<<endl;
        }
        else if(x>45){
            cout<<-1<<endl;

        }
        
      else if(x>9 && x<= 17){
          cout<<(x-9)<<9<<endl;
      }else if(x>17 && x<=24){
          cout<<(x-17)<<89<<endl;
      }else if(x>24 && x<=30){
          cout<<(x-24)<<789<<endl;
      }else if(x>30 && x<=35){
          cout<<(x-30)<<6789<<endl;
      }else if(x>35 && x<=39){
          cout<<(x-35)<<56789<<endl;
      }
      else if(x>39 && x<=42){
          cout<<(x-39)<<456789<<endl;
      }
      else if(x>42 && x<=44){
          cout<<(x-42)<<3456789<<endl;
      }
      else if(x>44 && x<=45){
          cout<<(x-44)<<23456789<<endl;
      }
        
    
    }
    return 0;
}