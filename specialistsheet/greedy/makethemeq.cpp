#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define fl(i,n) for(int i=0;i<n;i++)


int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
    char ch;
    string s;
    cin>>n>>ch>>s;
    bool ok=true;
    ll in=-1;
    fl(i,n){
        if(s[i]==ch)in=i;
        if(s[i]!=ch)ok=false;
    }
    if(ok)
    cout<<"0\n";
    else if(in==-1){
        cout<<"2\n"<<n-1<<" "<<n<<"\n";
    }
    else if(in==n-1)
    {
        cout<<"1\n"<<in+1<<"\n";
    }
    else if(in>=n/2)
    {
        
        cout<<"1\n"<<in+1<<"\n";
    }
    else
    {
        cout<<"2\n"<<n-1<<" "<<n<<"\n";
    }
    }
    return 0;
}