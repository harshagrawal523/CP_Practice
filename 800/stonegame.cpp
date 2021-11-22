#include <iostream>
#include <algorithm>  
using namespace std;
typedef long long ll;




int main(){
    int t; cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int ma = INT_MIN;
        int mi = INT_MAX;
        for(int i = 0;i<n;i++){
            cin>>arr[i];
            ma = max(ma,arr[i]);
            mi = min(mi,arr[i]);
        }
        int lma,lmi;
        for(int i =0;i<n;i++){
            if(arr[i]==ma)
                lma = i+1;
            else if(arr[i]==mi){
                lmi = i+1;
            }
        }
        int rma = n-lma+1;
        int rmi = n-lmi+1;
        int a1 = max(rma,rmi);
        int a2 = max(lma,lmi);
        int a3 = min(lma+rmi,lmi+rma);
        cout<<min(a1,min(a2,a3))<<endl;
    }    
    return 0;
}