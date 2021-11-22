#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    string s,t;cin>>s>>t;
    map <int,int> m1,m2;
    for(char i:s){
        m1[i]++;
    }
    for(char i:t){
        m2[i]++;
    }
    for(int i =0;i<26;i++){
        m1[char('a'+i)]+=0;
    }
    bool flag = true;
    for(auto i:m1){
        if(i.second<m2[i.first]){
            cout<<"need tree\n";
            return 0;
        }
        else if(i.second>m2[i.first]){
            flag = false;

        }
    }
    int pos =0;
    bool f2 = true;
    for(int i = 0;i<s.length();i++){
        if(s[i]==t[pos]){
            pos++;
        }
        if(pos == t.length()){
            break;
        }
    }
    if(pos!=t.length()){
        f2 = false;
    }
    if(!f2 && !flag){
        cout<<"both\n";
    }
    else if(!f2){
        cout<<"array\n";
    }
    else{
        cout<<"automaton\n";
    }
    return 0;
}