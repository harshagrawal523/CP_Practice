#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

void solve(){
    int n; string s;
    cin>>n;
    cin>>s;
    int sum = s[n-1] - '0';
    
   for(int i =0;i<n-1;i++){
       if(s[i]!='0'){
           sum++;
           sum+=s[i]-'0';
       }
   }
    cout<<sum<<endl;

}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}