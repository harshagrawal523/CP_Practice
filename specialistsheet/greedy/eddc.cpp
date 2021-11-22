#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int k,x;
        cin>>k>>x;
        if(x>k*k){
            cout<<2*k-1<<endl;
        }
        else{
             double d = x;
        double ans = (sqrt(1 + 8*d) - 1)/2;
        double fin = ceil(ans);
        cout<<(int)fin<<endl;

        }
       
    }
    return 0;
}