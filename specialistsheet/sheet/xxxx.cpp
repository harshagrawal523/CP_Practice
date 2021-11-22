#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 


void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    int total_div = 0;
    int total_sum=0;
    for(int i =0;i<n;i++){
        cin>>a[i];
        if(a[i]%x==0){
            total_div++;
        }
        total_sum+=a[i];
    }
    if(total_div==n){
        cout<<"-1\n";
        return;
    }
    else if(total_sum%x!=0){
        cout<<n<<endl;
        return;
    }
    else{
        int mini = 0;
        int tot = total_sum;
        for(int i =0;i<n;i++){
            tot -=a[i];
            if(tot%x){
                mini = max(mini,n-i-1);
                break;
            }
        }
        tot = total_sum;
        for(int i = n-1;i>=0;i--){
            tot-=a[i];
            if(tot%x){
                 mini = max(mini,i);
                break;
            }
        }
        cout<<mini<<endl;
    }
    return;


}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}