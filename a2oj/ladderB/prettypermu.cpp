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
        vector<int> v;
        int x=2,y=1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                v.push_back(x);
                x+=2;
            }
            else{
                v.push_back(y);
                y+=2;
            }
        }
        for(int i =0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}