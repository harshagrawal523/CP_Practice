#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    double r,x1,y1,x2,y2;
    cin>>r>>x1>>y1>>x2>>y2;
    int ans = ceil((sqrt(pow(x1-x2,2)+pow(y1-y2,2))/(2.00*r)));
    cout<<ans<<endl;

    return 0;
}