#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int> > p;
        for(int i =0;i<n;i++){
            int x;
            cin>>x;
            p.push_back(make_pair(x,i+1));
        }
        sort(p.begin(),p.end());
        int d = 1;
        int sum = 0;
        if(n%2!=0){for(int i =n-1;i>=0;i--){
            if(i%2==0){
                sum += d*p[i].first;
                p[i].first=d;
            }
            else{
                sum += d*p[i].first;
                p[i].first=(-d);
                 d++;
            }
           
        }}
        else{
            for(int i =n-1;i>=0;i--){
            if(i%2!=0){
                sum += d*p[i].first;
                p[i].first=d;
            }
            else{
                sum += d*p[i].first;
                p[i].first=(-d);
                 d++;
            }
           
        }

        }

        sort(p.begin(), p.end(), sortbysec);
        cout<<2*sum<<endl;
        cout<<0<<" ";
        for(int i = 0;i<n;i++){
            cout<<p[i].first<<" ";
        }
        cout<<endl;





    }
    return 0;
}