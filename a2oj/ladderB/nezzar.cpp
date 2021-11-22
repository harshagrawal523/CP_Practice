#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include<map>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        map <int,int> m;
        for(int i =0;i<n;i++){
            cin>>arr[i];
            m[arr[i]]++;
        }
        int count =0;
        
        vector<int> v;
        for(int i =0;i<n;i++){
            if(arr[i]!=arr[i+1]){
                v.push_back(arr[i]);
            }
        }
        int ma = 0;
        for(int i =0;i<v.size();i++){
            ma = max(m[v[i]],ma);
        }
        cout<<ma<<endl;
    }
    return 0;
}