#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int n,m;
    int a[10];
    int b[10];
    int ans[200017];
    n=0;
    m=2e5;
    fill(a, a + 10, 0);
    int s = 0;
    a[0]=1;
    for (int j = 0; j < m+10; ++j)
    {
        s = 0;
        b[0] = a[9] % 1000000007;
        b[1] = a[9] % 1000000007 + a[0] % 1000000007;
        b[2] = a[1] % 1000000007;
        b[3] = a[2] % 1000000007;
        b[4] = a[3] % 1000000007;
        b[5] = a[4] % 1000000007;
        b[6] = a[5] % 1000000007;
        b[7] = a[6] % 1000000007;
        b[8] = a[7] % 1000000007;
        b[9] = a[8] % 1000000007;
        for (int l = 0; l < 10; ++l)
        {
            a[l] = b[l];
            s += a[l];
        }
        ans[j] = s % 1000000007;
    }
     int t;cin >> t;
    for (int i = 0; i < t; ++i)
    {
        cin >> n >> m;
        ll res = 0;
        while (n > 0)
        {
            res += ans[m + n % 10 - 1];
            n /= 10;
        }
        cout << res % 1000000007 << "\n";
    }

    return 0;
}