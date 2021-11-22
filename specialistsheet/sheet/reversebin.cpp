#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;string s;
        cin>>n>>s;
        int c = 0;
        for(int i =0;i<n-1;i++){
            if(s[i]==s[i+1]){
                c++;
            }
        }
        cout<<ceil(c/2.0)<<endl;
    }
    return 0;
}