#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n , k;
        cin>>n>>k;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        int c=0;
        while(k>0 && c<n-1){
            arr[n-1] += 1;
            while (arr[c]<=0)
            {
                c++;
            }
            arr[c]--;
            k--;
            
        }
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
        

    }
    return 0;
}