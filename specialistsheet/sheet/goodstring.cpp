#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int t;cin>>t;
    while(t--){
        int ans = 2,n;
        string s;
        cin>>s;
        n = s.length();
        for(char i = '0';i<='9';i++){
            for(char j='0';j<='9';j++){
                int tm =0;
                for(int x =0;x<n;x++){
                    if(tm & 1){
                        if(s[x]==j){
                            tm++;
                        }
                    }
                    else if(!(tm & 1)){
                        if(s[x]==i){
                            tm++;
                        }
                    }
                }
                if(i!=j){
                    if(tm&1){
                        tm--;
                    }
                }
                ans = max(ans,tm);
            }
        }
        cout<<n-ans<<"\n";
    }
    return 0;
}