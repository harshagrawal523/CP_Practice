#include <iostream>
#include <string>
#include <vector>
#include<stack>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    stack <char> st;
     string s;
     cin>> s ;
     ll ans=0;
     for(int i=0;i<s.size();i++)
     {
         if(s[i]=='(') st.push(s[i]);
         else if(s[i]==')') {
             if(st.size()>0)
             {
                 st.pop();
                 ans+=2;
             }
         }
     }
     cout<< ans ;
    
    return 0;
}