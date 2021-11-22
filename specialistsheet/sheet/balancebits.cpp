#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if ((n & 1) != 0 || s[0] == '0' || s[n - 1] == '0')
        {
            cout << "NO" << endl;
            continue;
        }
        int co = 0, cz = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                ++co;
            }
            else
            {
                ++cz;
            }
        }
        if (co % 2 == 1 || cz % 2 == 1)
        {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        string a = "", b = "";
        int c1 = 1, c2 = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '1')
            {
                if (c1 <= co / 2)
                {
                    a += '(';
                    b += '(';
                }
                else
                {
                    a += ')';
                    b += ')';
                }
                ++c1;
            }
            else
            {
                if (c2 == 0)
                {
                    a += '(';
                    b += ')';
                }
                else
                {
                    a += ')';
                    b += '(';
                }
                c2 ^= 1;
            }
        }
        cout << a << endl
             << b << endl;
    }
    return 0;
}