#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t
//harshagrawal
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        char a, b;
        bool flag = false;
        for (int i = 0, j = n - 1; i <= j;)
        {
            if (s[i] == s[j])
            {
                i++;
                j--;
            }
            else
            {
                a = s[i];
                b = s[j];
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << 0 << endl;
        }
        else
        {
            bool flag1 = true, flag2 = true;
            int c1 = 0, d1 = 0;
            for (int i = 0, j = n - 1; i <= j;)
            {
                if (s[i] == s[j])
                {
                    i++;
                    j--;
                }
                else if (s[i] != s[j] && (s[i] == a || s[j] == a))
                {
                    if (s[i] == a)
                        i++;
                    else
                        j--;

                    c1++;
                }
                else
                {
                    flag1 = false;
                    break;
                }
            }
            for (int i = 0, j = n - 1; i <= j;)
            {
                if (s[i] == s[j])
                {
                    i++;
                    j--;
                }
                else if (s[i] != s[j] && (s[i] == b || s[j] == b))
                {
                    if (s[i] == b)
                        i++;
                    else
                        j--;

                    d1++;
                }
                else
                {
                    flag2 = false;
                    break;
                }
            }
            if (flag1 && flag2)
            {
                cout << min(c1, d1) << endl;
            }
            if (!flag1 && !flag2)
            {
                cout << -1 << endl;
            }
            if (flag1 && !flag2)
            {
                cout << c1 << endl;
            }
            if (!flag1 && flag2)
            {
                cout << d1 << endl;
            }
        }
    }
    return 0;
}