#include <iostream>
#include <algorithm>
using namespace std;
#define int int64_t 

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        
        if(a>b){
            swap(a,b);
        }
        int d = (a+b)/4;
        if(a==0 || b==0){
            cout<<0<<endl;
        }
        else if(a>=d){
            cout<<d<<endl;
        }
        else if(a<d){
            cout<<a<<endl;
        }
       
     
    }
    return 0;
}