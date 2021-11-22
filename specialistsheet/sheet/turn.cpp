#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int solve()
    
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 4 << endl;
        return (0);
    }
    if (n % 2 == 0)
        cout << (n / 2 + 1) * (n / 2 + 1) << endl;
    else
        cout << 2 * (n / 2 + 1) * (n / 2 + 2) << endl;
    return (0);
}



int32_t main(){
    solve();
    return 0;
}