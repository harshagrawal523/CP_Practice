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
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                a[i][j]=0;
            }
        }
        for(int i =0;i<n;i+=2){
            a[i][0]=1;
            a[i][m-1]=1;
        }
        for(int i =2;i<=m-3;i+=2){
            a[0][i] = 1;
            a[n-1][i] =1;
        }
        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                cout<<a[i][j];
            }
            cout<<"\n";
        }
        cout<<endl;

    }
    return 0;
}