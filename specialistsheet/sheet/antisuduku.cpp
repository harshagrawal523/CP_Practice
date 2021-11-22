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
        for(int i =0;i<9;i++){
            string s;
            cin>>s;
            for(int j=0;j<9;j++){
                if(s[j]=='2'){
                    s[j]='1';
                }
            }
            cout<<s<<endl;
        }
    }
    return 0;
}