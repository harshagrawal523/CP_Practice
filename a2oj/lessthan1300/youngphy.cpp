#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    
        ll arr[n][3];
        for(ll i = 0;i<n;i++){
            for(ll j = 0;j<3;j++){
                cin>>arr[i][j];
           }
        }
        int sumx =0,sumy=0,sumz=0;
        for(ll i = 0;i<n;i++){
            sumx = sumx + arr[i][0];
            sumy = sumy + arr[i][1];
            sumz = sumz + arr[i][2];
        }
        if(sumx==0 && sumy==0 && sumz==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }


    return 0;
}