#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int st = 0, en = n - 1, c = 0;
        if (k == 0 )
        {
            cout << "YES\n";
        }
        else if(2*k+1>n){
            cout<<"NO\n";
        }
        else
        {
            while (s[st] == s[en])
            {
                c++;
                st++;
                en--;
                
            }
            if (c>=k)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}