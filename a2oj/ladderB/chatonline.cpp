#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int p,q,l,r;
    cin>>p>>q>>l>>r;
    vector<pair <int,int> > vp1,vp2;
    for(int i =0;i<p;i++){
        int x,y;
        cin>>x>>y;
        vp1.push_back(make_pair(x,y));
    }
    for(int i =0;i<q;i++){
        int x,y;cin>>x>>y;
        vp2.push_back(make_pair(x,y));
    }
    int ans = 0;
    for(int i =l;i<=r;i++){

        bool flag = false;
        for(int j=0;j<p;j++){
            for(int k=0;k<q;k++){
                if(vp1[j].first>=vp2[k].first+i and vp1[j].first<=vp2[k].second+i){
                    flag = true;
                }
                if(vp2[k].first+i>=vp1[j].first and vp2[k].first+i<=vp1[j].second){
                    flag = true;
                }
            }
            
        }
        if(flag){
            ans++;
        }

    }
    cout<<ans<<"\n";
    return 0;
}