#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define int int64_t 

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        string s;
		cin >> s;
 
		int n = s.length();
 
		int count_1 = 0;
		int count_0 = 0;
 
		for (int i = 0; i < n; i++) {
			if (s[i] == '1') {
				count_1++;
			} else {
				count_0++;
			}
		}
 
		int pref_0[n + 1] = {0};
		int pref_1[n + 1] = {0};
 
		if (s[0] == '0') {
			pref_0[0] = 1;
			pref_1[0] = 0;
		} else {
			pref_1[0] = 1;
			pref_0[0] = 0;
		}
 
		for (int i = 1; i < n; i++) {
			if (s[i] == '0') {
				pref_0[i] = pref_0[i - 1] + 1;
				pref_1[i] = pref_1[i - 1];
			} else {
				pref_1[i] = pref_1[i - 1] + 1;
				pref_0[i] = pref_0[i - 1];
			}
		}
 
		int ans = INT_MAX;
		for (int i = 0; i < n; i++) {
			ans = min(ans, pref_1[i] + (count_0 - pref_0[i]));
		}
 
		for (int i = 0; i < n; i++) {
			ans = min(ans, pref_0[i] + (count_1 - pref_1[i]));
		}
 
		cout << ans << "\n";
        
    }
    return 0;
}