#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int n;cin>>n;
    int ar[n+10];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    if(n==2)
    {
        if(ar[0]>ar[1])
        {
            cout<<"1\n";
        }
        else
        {
            cout<<"0\n";
        }
        return 0;
    }

    bool flag=true;
    bool ans=true;
    int pos=0;
    for(int i=0;i<n-1;i++)
    {
        if(flag)
        {
            if(ar[i+1]<ar[i])
            {
                flag=false;
                pos=i;
            }
        }
        else
        {
            if(ar[i]>ar[i+1])
            {
                ans=false;
            }
        }
    }
    if(flag)
    {
        if(ar[0]==ar[n-1])
        {
            flag=false;
            pos=n-1;
        }
    }
  
    if(ar[0]<ar[n-1])
    {
        ans=false;
    }
    if(!flag and ans)
    {
        int val=n-pos-1;
        cout<<val<<"\n";
    }
    else
    {
        cout<<"-1\n";
    }
    return 0;
}