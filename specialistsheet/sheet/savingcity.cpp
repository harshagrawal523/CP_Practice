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
        int a,b;cin>>a>>b;
        string s;
        cin>>s;
        int f = -1,l=-1;
        for(int i =0;i<s.size();i++){
            if(s[i]=='1'){
                f=i;
                break;
            }
        }
        for(int i =s.size()-1;i>=0;i--){
            if(s[i]=='1'){
                l=i;
                break;
            }
        }
        if(l==f && f==-1){
            cout<<"0\n";
            continue;
        }
        int ans = a;
        // int cha = INT64_MAX;
        for(int i =f;i<=l;i++){
            int c=0;
            while(s[i]=='0'){
                c++;
                i++;
            }
            ans +=min(a,b*c);

        }
        cout<<ans<<"\n";
       


    }
    return 0;
}