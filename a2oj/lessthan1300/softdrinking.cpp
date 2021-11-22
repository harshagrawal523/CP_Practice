#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    int  n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int ans1 = (k*l)/nl;
    int ans2 = c*d;
    int ans3 = p/np;
    cout<<(min(ans1,min(ans2,ans3)))/n;
    return 0;
}