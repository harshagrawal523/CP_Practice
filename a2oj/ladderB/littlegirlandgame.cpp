#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    string s;
    cin>>s;
    map <int,int> mp;
    for(char i:s){
        mp[i]++;
    }
    int odd =0;
    for(auto i:mp){
        if(i.second%2!=0){
            odd++;
        }

    }
    if(odd%2!=0 || odd ==0){
        cout<<"First\n";
    }
    else{
        cout<<"Second\n";
    }
    return 0;
}