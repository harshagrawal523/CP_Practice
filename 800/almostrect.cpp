#include <iostream>
#include <string>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n ;
        cin>>n;
        char arr[n][n];
       
         ll r1 = -1,c1 = -1,r2 = -1,c2 = -1;
        for(ll i =0;i<n;i++){
            for(ll j = 0;j<n;j++){
                cin>>arr[i][j];

                if(arr[i][j]=='*'){
                    if(r1==-1){
                        r1= i;
                        c1=j;
                    }
                    else{
                        r2=i;
                        c2=j;
                    }
                }

            }
        }
        if(c1 != c2 && r1 != r2){
           
           arr[r2][c1] = '*';
           arr[r1][c2] = '*';
           
       }else if(r1 == r2){
           
           if(r1 != n-1){
               arr[r1+1][c1] = '*';
               arr[r2+1][c2] = '*';
           }else{
               arr[r1-1][c1] = '*';
               arr[r2-1][c2] = '*';
           }
           
       }else if(c1 == c2){
           
           if(c1 != n-1){
               arr[r1][c1+1] = '*';
               arr[r2][c2+1] = '*';
           }else{
                arr[r1][c1-1] = '*';
                arr[r2][c2-1] = '*';
           }
           
       }
       for(ll i =0;i<n;i++){
            for(ll j = 0;j<n;j++){
                cout<<arr[i][j];
            }
            cout<<endl;
       }

    }
    return 0;
}