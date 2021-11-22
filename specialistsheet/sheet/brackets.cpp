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
        int x = n;
        while(x){
            for(int i =0;i<x;i++){
                cout<<"(";
            }
             for(int i =0;i<x;i++){
                cout<<")";
            }
            for(int i =0;i<n-x;i++){
                cout<<"(";
            }
            for(int i =0;i<n-x;i++){
                cout<<")";
            }
            x--;
    cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}