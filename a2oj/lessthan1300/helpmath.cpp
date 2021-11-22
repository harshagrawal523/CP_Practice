#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    string s,s1;
    cin>>s;
    
    for(int i = 0;i<s.length();i++){
       if(s[i]!='+'){
           s1.push_back(s[i]);
       }
    }
    
    sort(s1.begin(),s1.end());
    cout<<s1[0];
    for(int i = 1;i<s1.length();i++){
        cout<<"+"<<s1[i];
    }
    

    return 0;
}