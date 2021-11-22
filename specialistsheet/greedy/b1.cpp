#include <iostream>
#include <string>
#include <vector>
#include<map>
#include<unordered_map>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 
//harshagrawal

void solve(){
    int n;cin>>n;
       int arr[n];
       int brr[n+1][n];
       map<int,int>mp;
       
       for(int i=0;i<n;i++){
          cin>>arr[i];
       }
        
        for(int i=0;i<n;i++){
          mp[arr[i]]++;
            brr[0][i]=arr[i];
        }
       
       for(int j=1;j<n+1;j++){
         for(int i=0;i<n;i++){
           brr[j][i]=mp[brr[j-1][i]];
        }
       mp.clear();
        for(int i=0;i<n;i++){
          mp[brr[j][i]]++;
        }
        
      }
      int q;cin>>q;
      while(q--){
         int x,k;cin>>x>>k;
         
         if(k>n){
            cout<<brr[n][x-1]<<endl;
         }
         else{
            cout<<brr[k][x-1]<<endl;
         }
      }
       

}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
         solve();
    }
    return 0;
}