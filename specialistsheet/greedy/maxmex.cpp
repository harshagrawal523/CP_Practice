#include <iostream>
#include <string>
#include <vector>
#include<unordered_map>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        unordered_map<int,int>mp;
        int uni=0,ma=INT64_MIN;
        for(int i =0;i<n;i++){
            int x;cin>>x;
            ma = max(ma,x);
            mp[x]++;
            if(mp[x]==1){
                uni++;
            }
        }
        int me = INT64_MAX;
        for(int i =0;i<ma+1;i++){
            if(!mp[i]){
                me = i;
                break;
            }
        }
        if(me<ma && k!=0){
            int avg = (me+ma+1)/2;
            mp[avg]++;
            if(mp[avg]==1){
                uni++;
            }

        }
        else if(me>ma && k!=0){
            uni+=k;
        }
        cout<<uni<<endl;

       
        int mex,maxi;
        while(k--){
            


        }
    }
    return 0;
}