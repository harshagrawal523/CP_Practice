#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    ll n,m;cin>>n>>m;
    ll mini;
    ll maxi;
    maxi = ((n-(m-1))*(n-m))/2;
    ll sz = n/m;
    ll rem = n%m;
    mini = (rem*(sz+1)*(sz))/2 + ((m-rem)*(sz)*(sz-1))/2;
    cout<<mini<<" "<<maxi<<endl;


    return 0;
}