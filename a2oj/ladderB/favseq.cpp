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
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int s = 0,e=n-1;
        vector<int> v;
        while(s<e){
            v.push_back(arr[s]);
            v.push_back(arr[e]);
            s++;e--;
        }
        if(s==e){
            v.push_back(arr[s]);
        }
        for(int i =0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }
    return 0;
}