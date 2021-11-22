#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    if (n % 2 != 0)
        cout << "-1\n";
    else
    {
        for (ll i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                cout << i - 1 << " ";
            else
            {
                cout << i + 1 << " ";
            }
        }
    }
    return 0;
}