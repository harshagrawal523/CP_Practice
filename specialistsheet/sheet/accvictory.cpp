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
        int arr[n],sum=0;
        vector< pair<int,int> > v;
        for(int i =0;i<n;i++){
            cin>>arr[i];
            v.push_back(make_pair(arr[i],i+1));
            sum +=arr[i];
        }
        sort(v.begin(),v.end());
        int c = 1;
        for(int i = n-2;i>=0;i--){
            sum -=v[i+1].first;
            if(sum<v[i+1].first){
                break;
            }
            else{
                c++;
            }
        }
        vector<int> v1;
        for(int i =n-1;i>=n-1-c+1;i--){
            v1.push_back(v[i].second);
        }
        sort(v1.begin(),v1.end());
        cout<<v1.size()<<endl;
        for(auto i : v1){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}