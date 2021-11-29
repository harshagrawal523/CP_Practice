#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

bool ispal(int n,vector<int> v){
    int i=0,j=n-1;
    while(i<=j){
        if(v[i]!=v[j]){
            return false;
            break;
        }
        i++;j--;
    }
    return true;
}


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
        int s = 0,e=n-1;
        int x,y;
        bool palin = true;
        while(s<=e){
            if(a[s]!=a[e]){
                x = a[s];y=a[e];
                palin = false;
                break;
            }
            s++;e--;
        }
        vector<int>a1,a2;
        for(int i =0;i<n;i++){
            if(a[i]!=x){
                a1.push_back(a[i]);
            }

        }
        for(int i =0;i<n;i++){
            if(a[i]!=y){
                a2.push_back(a[i]);
            }
            
        }
        if(palin){
            cout<<"YES\n";
        }
        else if(ispal(a1.size(),a1) || ispal(a2.size(),a2)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }



    }
    return 0;
}