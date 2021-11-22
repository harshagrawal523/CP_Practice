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
    vector<int>b(101);
    for(int i=0;i<n;i++) cin>>a[i],b[a[i]]++;
    for(int i=0;i<=100;i++){
        if(b[i]>0){
            cout<<i<<" ";
            b[i]--;
        }
    }
    for(int i=0;i<=100;i++){
        for(int j=0;j<b[i];j++){
            cout<<i<<" ";
        }
    }
    cout<<"\n";
    }
    return 0;
}
