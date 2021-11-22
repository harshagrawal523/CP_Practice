#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 
//harshagrawal
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
        
        bool flag = 0;

        for(int i =0;i<n;i++){
            if(a[i]!=a[0]){
                
                flag = 1;

                break;
                
            }

        }
        if(flag==0){
            cout<<-1<<endl;
        }
        else{
            int g = 0;
            for(int i =1;i<n;i++){
                int d = a[i]-a[0];
                g = __gcd(d,g);
            }
            cout<<g<<endl;

        }

    }
    return 0;
}