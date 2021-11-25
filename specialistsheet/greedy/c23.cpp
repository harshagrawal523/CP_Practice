#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        if(n==1) cout<<a[0]<<endl;

        else if(a[0]!=n && a[n-1]!=n){
            cout<<-1<<endl;
        }
        else{
            reverse(a.begin(),a.end());
            for(auto i:a){
                if(i!=n){
                    cout<<i<<" ";
                }
            }
            cout<<n<<" ";
            cout<<endl;
        }
        

    }
    return 0;
}