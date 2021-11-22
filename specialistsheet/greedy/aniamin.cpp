#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    if(n==1 && k==1)
        {
            cout<<0;
        }else
        {
            for(int i=0;i<n;i++)
            {
                if(k==0)
                    break;
                if(s[0]!='1')
                {
                    s[0]='1';
                    k--;
                    continue;
                }else if(s[i]!='0' && i!=0)
                {
                    s[i]='0';
                    k--;
                }
            }
            cout<<s;
        }
    return 0;
}