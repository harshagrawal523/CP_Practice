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
        int a,b,c;
        cin>>a>>b>>c;
        int x = a+c-2*b;
        if(x%3==0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}