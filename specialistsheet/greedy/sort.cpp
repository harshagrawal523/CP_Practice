#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 


bool issort(vector<int>v,int n){
    vector<int>s;
    s=v;
    sort(s.begin(),s.end());
    for(int i =0;i<n;i++){
        if(s[i]!=v[i]){
            return false;
            break;
        }
    }
    return true;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        if(issort(a,n)){
            cout<<"YES\n";
        }
        else{
            if(x==n){
                cout<<"NO\n";
            }
            else if(x<=n/2){
                cout<<"YES\n";
            }
            else{
                int y = n-x;
                vector<int>ans;
                for(int i =0;i<y;i++){
                    ans.push_back(a[i]);
                }
                for(int i =n-1;i>=n-y;i--){
                    ans.push_back(a[i]);
                }
                sort(ans.begin(),ans.end());
                vector<int>v;
                for(int i =0;i<ans.size()/2;i++){
                    v.push_back(ans[i]);
                }
                for(int i =x;i<n-x;i++){
                    v.push_back(a[i]);
                }
                for(int i =ans.size()/2;i<ans.size();i++){
                    v.push_back(ans[i]);
                }
                if(issort(v,n)){
                    cout<<"YES\n";
                }
                else{
                    cout<<"NO\n";
                }
            }
        }

    } 
    return 0;
}