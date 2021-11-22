#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int t;cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int arr[n];
        unordered_map<int,int> mp;
        int m = 0;
        int second = -1;
        for(int i =0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
            m = max(m,mp[arr[i]]);

        }
        if(m==n){
            cout<<"NO\n";
            continue;

        }
        cout<<"YES\n";
        for(int i =1;i<n;i++){
            if(arr[i]!=arr[0]){
                second = i;
                break;
            }
        }
        for(int i =1;i<n;i++){
            if(arr[i]!=arr[0]){
                cout<<1<<" "<<i+1<<"\n";
            }
            else{
                cout<<second +1<<" "<<i+1<<"\n";
            }
        }



    }
    return 0;
}