#include <iostream>
#include <string>
#include<map>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v1,v2;
        for(int i =0;i<n;i++){
            int x;
            cin>>x;
            v1.push_back(x);
            v2.push_back(x);
        }
        
        sort(v2.begin(),v2.end());
        vector<int> v3;
        for(int i =0;i<n;i++){
            if(v2[i]!=v2[i+1]){
                v3.push_back(v2[i]);
            }
        }
        map<int,int>  m;
        for(int i =0;i<n;i++){
            m[v2[i]]++;
        }
        vector<int> v4;
        for(int i =0;i<v3.size();i++){
            for(int j = 0;j<m[v3[i]];j++){
                v4.push_back(v3[i]);
            }
        }
        

    }
    return 0;
}