#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

#define fl(i,n) for(int i=0;i<n;i++)

void asquare()
{
	ll n;
	cin>>n;
	string s;
	cin>>s;
	if(n==1)
	cout<<"-1 -1\n";
	else
	{
		bool ok =true;
		char ch=s[0];
		fl(i,n)
		{
			if(i==0)continue;
			else if(s[i]!=ch){cout<<i<<" "<<i+1<<"\n";ok=false;break;}
		}
		if(ok)cout<<"-1 -1\n";
	}
}

int main(){
    
    ll t;
    cin>>t;
    while(t--)
    {
        asquare();
    }
    return 0;
}