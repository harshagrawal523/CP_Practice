#include<iostream>
#include<cmath>
#include<map>
using namespace std;
#define mod 1000*1000*1000+7
int main()
{
//    2 2
//
//
//    1 0
//    0 0
//
//
//
//    0 0
//    0 0
    int n,m;cin>>m>>n;
    int mat[m+10][n+10];
    int ans[m+10][n+10];
    int tras[m+10][n+10];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
            ans[i][j]=1;
            tras[i][j]=0;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i][j]==0)
            {
                for(int k=0;k<n;k++)
                {
                    ans[i][k]=0;
                }
                for(int k=0;k<m;k++)
                {
                    ans[k][j]=0;
                }
            }
        }
    }
//    cout<<"----\n";
//    for(int i=0;i<m;i++)
//    {
//        for(int j=0;j<n;j++)
//        {
//            cout<<ans[i][j]<<" ";
//        }
//        cout<<"\n";
//    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                tras[i][j]=max(tras[i][j],ans[i][k]);
            }
            for(int k=0;k<m;k++)
            {
                tras[i][j]=max(tras[i][j],ans[k][j]);
            }
            if(tras[i][j]!=mat[i][j])
            {
                cout<<"NO\n";
                return 0;
            }
        }
    }
    cout<<"YES\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
