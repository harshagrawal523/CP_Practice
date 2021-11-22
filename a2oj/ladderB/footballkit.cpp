#include<iostream>
#include<cmath>
#include<map>
using namespace std;
#define mod 1000*1000*1000+7
int main()
{
    int n;cin>>n;
    map<int,int> hm;
    int ar[n+10][2];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i][0]>>ar[i][1];
        hm[ar[i][0]]++;
    }
    int match=2*(n-1);
    for(int i=0;i<n;i++)
    {
        int hm_dress = n-1 + hm[ar[i][1]];
        int away_dress = match - hm_dress;
        cout<<hm_dress<<" "<<away_dress<<"\n";
    }
    return 0;
}