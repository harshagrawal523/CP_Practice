#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int main(){
    ll n,k,a;
    cin>>n>>k;
   if(n%2==0){
       a=n/2;
   }
   else{
       a=(n+1)/2;
   }
    
   if(k>a){
       cout<<(k-a)*2<<endl;
   }
   else if (k<=a){
       cout<<2*(k-1) + 1<<endl;
   }
     
    
    return 0;
}