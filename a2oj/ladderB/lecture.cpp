#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    int n,m;
    cin>>n>>m;
    vector<pair <string,string> > v;
    for(int i =0;i<m;i++){
        string a,b;
        cin>>a>>b;
        if(a.length()>b.length()){
            v.push_back(make_pair(a,b));
        }
        else{
            v.push_back(make_pair(a,a));
        }
    }
    // vector<string> lec;
    // for(int i =0;i<n;i++){
    //     string s;cin>>s;
    //     lec.push_back(s);
    // }
    // for(int i =0;i<n;i++){
    //     for(int j =0;j<m;j++){
    //         if(lec[i] == (v[j].first)){
    //             cout<<v[j].second<<" ";
    //         }
    //     }
    // }
    for(int i =0;i<n;i++){
        string x;cin>>x;
        for(int j =0;j<m;j++){
            if(x == (v[j].first)){
                cout<<v[j].second<<" ";
            }
        }
    }
    return 0;
}