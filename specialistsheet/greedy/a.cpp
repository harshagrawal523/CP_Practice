#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
   int t;
   cin>>t;
   while(t--){
      string main;
        cin >> main;
        string a;
        cin >> a;
        
        map<char,int> idx;
        for(int i = 0 ; i < main.length() ; i++) {
            idx[main[i]]=i;
        }
        int ans=0;
        for(int i = 0 ; i <a.length()-1 ; i++) {
            ans += abs(idx[a[i]]-idx[a[i+1]]);
        }
        cout << ans << endl;
      
   }
   return 0;
}