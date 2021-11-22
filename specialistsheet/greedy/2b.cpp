#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
	int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        vector<int> v;
        if((a<=n/2 && b<=n/2) ||(a>=n/2 && b>=n/2)) cout<<"-1"<<endl;
        else
        {
            for(int i=0; i<n/2; i++)
            {
                v.push_back(a);
                a+=1;
            }
            for(int i=n/2; i<n; i++)
            {
                v.push_back(b);
                b-=1;
            }
 
            for(int i=0; i<n; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
	return 0;
}