#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    string s;
    cin>>s;
    int k;cin>>k;
    int arr[26];
    int maxi =0;
    for(int i =0;i<26;i++){
        cin>>arr[i];
        maxi = max(maxi,arr[i]);
    }
    int ans = 0;
    for(int i =0;i<s.length();i++){
        ans += (i+1)*arr[s[i]-'a'];
    }
    int val = s.length()+1;
    while(k--){
        ans += val*maxi;
        val++;
    }
    
    cout<<ans<<"\n";
    return 0;
}