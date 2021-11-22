#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;


int main(){
    ll k;
	cin>>k;
 
	string s = "codeforces";
 
	ll val[11];
	for (ll i = 0; i < 11; i++) {
		val[i] = 1;
	}
 
	ll prod = 1;
	while (prod < k) {
		//watch(prod);
		for (ll i = 0; i < 10; i++) {
			val[i]++;
			prod = prod/(val[i]-1);
			prod = prod * val[i];
 
			if (prod >= k) {
				break;
			}
		}
	}
 
	for (ll i = 0; i < 10; i++) {
		while (val[i] > 0) {
			cout << s[i];
			val[i]--;
		}
	} cout << "\n";
 
 
 
	return 0;

    return 0;
}