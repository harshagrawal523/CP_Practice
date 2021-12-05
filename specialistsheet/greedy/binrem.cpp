#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;
        int flag = 0;
        int c = 0, d = 0;
        if (is_sorted(s.begin(), s.end()))
        {
            cout << "YES" << endl;
        }
        else
        {
            int y = 0;
            for (int i = s.length() - 1; i > 0; i--)
            {
                if (s[i] == '0' && s[i - 1] == '0')
                {
                    y = i - 1;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                cout << "YES" << endl;
                continue;
            }
            int flag2 = 0;
            for (int i = y; i > 0; i--)
            {
                if (s[i] == '1' && s[i - 1] == '1')
                {
                    flag2 = 1;
                    break;
                }
            }
            if (flag2 == 0)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}