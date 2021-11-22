#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
       
    }
     for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        
    }
    bool flag = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] >= a[i])
        {
        }
        else
        {
            flag = 0;
            break;
        }
    }
    int sum0 = 0, sum1 = 0;

    for (int i = 0; i < n; i++)
    {
        
        if (b[i] == 0)
        {
            sum0++;
        }
        else
        {
            sum1++;
        }
    }
    if (flag)
    {
        cout << "Yes" << endl;
        return;
    }

    if (sum1 && sum0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No\n";
    }
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}