#include <iostream>
#include <string>
#include <vector>
#include<cmath>
#include<iomanip>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>m,d;
        for(int i =0;i<2*n;i++){
            int x,y;
            cin>>x>>y;
            if(x==0){
                if(y<0){
                    y = (-1)*y;
                }
                m.push_back(y);
            }
            else if(y==0){
                if(x<0){
                    x= (-1)*x;
                }
                d.push_back(x);
            }
        }
        sort(m.begin(),m.end());
        sort(d.begin(),d.end());
        double ans = 0;
        double time = 0;
        for(int i =0;i<n;i++){
            time = sqrt(m[i]*m[i]*(1.0) + d[i]*d[i]*(1.0));
            ans+=time;
        }
        cout<< setprecision(15) <<ans<<endl;


    }
    return 0;
}