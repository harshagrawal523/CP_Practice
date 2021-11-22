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
        int a[n];
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int sum = 0;
        for(int i =0;i<n;){
            int x = 1;
            while(x<a[i] && i<n-1){
                x++;
                i++;
            }
            if(x>=a[i]){
                sum++;
            }
            i++;
        }
        cout<<sum<<endl;
    }
    return 0;
}