#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t

void solve(){
    int n, a, b;
        cin >> n >> a >> b;
        vector<int> ans;
        ans.push_back(a);
        for (int i = n; i > 0; i--)
        {
            if (i != a && i != b)
            {
                ans.push_back(i);
            }
        }
        ans.push_back(b);
        if (ans[n / 2] > b || *min_element(ans.begin(), ans.begin() + n / 2) != a)
        {
            cout << -1;
        }
        else
        {
            for (auto c : ans)
            {
                cout << c << " ";
            }
        }
        cout << endl;
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