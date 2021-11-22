#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t

int32_t main()
{
    string s;
    cin >> s;
    bool flag = false;
    for (char i : s)
    {
        if ((i - '0') % 2 == 0)
        {
            flag = true;
        }
    }
    if (flag)
    {
        int n = s.length();
        for (int i = 0; i < s.length() - 1; i++)
        {
            if ((s[i] - '0') % 2 == 0)
            {
                if (s[i] < s[n - 1])
                {
                    swap(s[i], s[n - 1]);
                    break;
                }
            }
        }
        if ((s[n - 1] - '0') % 2 != 0)
        {
            for (int i = n - 2; i > -1; i--)
            {
                if ((s[i] - '0') % 2 == 0)
                {

                    swap(s[i], s[n - 1]);
                    break;
                }
            }
        }
        cout<<s<<"\n";
    }
    else
    {
        cout<<-1<<endl;
    }

    return 0;
}