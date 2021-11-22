#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
		cin >> n;
 
		ll a[n + 1];
		for (ll i = 1; i <= n; i++) {
			cin >> a[i];
		}
 
		string arr[n + 1];
		for (ll i = 0; i <= 52; i++) {
			arr[0] = arr[0] + 'a';
		}
 
		for (ll i = 1; i <= n; i++) {
			ll j;
			for (j = 0; j < a[i]; j++) {
				arr[i] += arr[i - 1][j];
			}
 
			if (arr[i - 1][j] == 'b') {
				for (; j <= 52; j++)
					arr[i] += 'a';
			} else {
				for (; j <= 52; j++)
					arr[i] += 'b';
			}
		}
 
		for (ll i = 0; i <= n; i++) {
			cout << arr[i] << "\n";
		}
    }
    return 0;
}