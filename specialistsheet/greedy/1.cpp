#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t

int32_t main()
{
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s, f;
        cin >> s >> f;
        int ans = 0;
        if (f.length() == 1)
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (abs(s[i] - f[0]) <= 13)
                {
                    ans += abs(s[i] - f[0]);
                }
                else
                {
                    ans += 26 - (abs(s[i] - f[0]));
                }
            }
        }
        else
        {

            int x = 0;
            while (x < s.length())
            {
                vector<int> dis;
                int y = 0;
                for (int i = 0; i < f.length(); i++)
                {
                    
                    if (abs(s[x] - f[i]) <= 13)
                    {
                        y = abs(s[x] - f[i]);
                    }
                    else
                    {
                        y = 26 - (abs(s[x] - f[i]));
                    }
                    dis.push_back(y);
                }
                sort(dis.begin(),dis.end());
                ans += dis[0];
                x++;
            }
        }
        cout << "Case #" << i + 1 << ": " << ans << endl;
    }
    return 0;
}