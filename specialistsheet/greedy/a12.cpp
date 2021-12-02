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
        vector<int> a(n);
        vector<bool> a2(1e6 + 1, 0);
        vector<pair<int, int> > fin;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a2[a[i]] = 1;
        }
        sort(a.begin(), a.end());
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (a2[a[i] % a[j]] == 0)
                    fin.push_back(make_pair(a[i],a[j]));
                if (fin.size() >= (n / 2)){ 
                    break;
                }
            }
            if (fin.size() >= (n / 2)){
                break;
            }
                
        }
        for (int i = 0; i < fin.size(); i++)
        {
            cout << fin[i].first << " " << fin[i].second << "\n";
        }
    }
    return 0;
}