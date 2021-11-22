#include <iostream>
#include <bitset>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t

int32_t main(){
    int n,m,k;
    cin>>n>>m>>k;
    bitset<32> arr[m];
    for(int i =0;i<m+1;i++){
        int x;
        cin>>x;
        arr[i] =x;

    }
    int ans = 0;
    for(int i =0;i<m;i++){
        int k_dif=0;
        for(int j =0;j<32;j++){
            if(arr[m][j]!=arr[i][j]){
                k_dif++;
            }
            
        }
        if(k_dif<=k){
                ans++;
        }
        
    }
    cout<<ans<<endl;
    return 0;
}