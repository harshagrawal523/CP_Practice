#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        string ans = "YES";
        for(int i =0;i<n;i++){
            if(s1[i]=='1' && s2[i]=='1'){
                ans = "NO";
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}