#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

void solve(){
    int n;
    cin>>n;
    int arr[n][5];
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++)
            cin>>arr[i][j];
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            int c1=0,c2=0,c3=0;
            for(int k=0;k<n;k++){
                if(arr[k][i]==1)
                    c1++;
                if(arr[k][j]==1)
                    c2++;
                if(arr[k][j]==1 && arr[k][i]==1)
                    c3++;
            }
            c1-=c3;
            c2-=c3;
            if(c1<=n/2 && c2<=n/2 && c1+c2+c3==n){
                cout<<"YES\n";
                return;
            }
        }
    }
    cout<<"NO\n";
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        
        solve();
    }
    return 0;
}