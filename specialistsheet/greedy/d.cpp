#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 
//harshagrawal
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],brr[n];
        for(int i =0;i<n;i++){
            cin>>arr[i];
        }
        if(n%2==0){
            for(int i =0;i<n;i++){
                if(i>=n/2){
                    brr[i] = -arr[n-i-1];
                }
                else{
                    brr[i] = arr[n-i-1];
                }
                
            }
            
        }
        else{
            if((arr[0]+arr[1])!=0){
                 brr[0]=-1*arr[n-1];
           brr[1]=-1*arr[n-1];
           brr[n-1]=arr[0]+arr[1];
            }
            else{
                if(arr[0]<0){
                    brr[0]=2*arr[n-1];
                    brr[1]=arr[n-1];
                    brr[n-1]=arr[1];
                }
                else{
                    brr[1]=2*arr[n-1];
                    brr[0]=arr[n-1];
                    brr[n-1]=arr[0];
                }
            }
            
           for(int i=2;i<=n/2;i++){
              brr[i]=-1*arr[n-i];
              brr[n-i]=arr[i];
           }
            
        }
        for(int i=0;i<n;i++){
              cout<<brr[i]<<" ";
           }
           cout<<endl;
       
    }
    return 0;
}