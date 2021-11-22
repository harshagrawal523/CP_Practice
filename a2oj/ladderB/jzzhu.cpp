#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 
#define mod 1000*1000*1000+7

int32_t main(){
    
    
    int64_t x,y;cin>>x>>y;
    int64_t n;cin>>n;
    n=n%6;
    int64_t val;
    if(n==0)
    {
        val=(x-y + mod + mod+ mod + mod);
        val%=mod;
    }
    else if(n==1)
    {
        val=(x + mod + mod);
        val%=mod;
    }
    else if(n==2)
    {
        val=(y + mod + mod);
        val%=mod;
    }
    else if(n==3)
    {
        val=(y-x + mod + mod + mod + mod);
        val%=mod;
    }
    else if(n==4)
    {
        val=(-x+mod+mod);
        val%=mod;
    }
    else
    {
        val=(-y + mod+mod);
        val%=mod;
    }
    cout<<val<<"\n";
    return 0;
}