#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int arr[4],arr1[4];
        for(int i = 0;i<4;i++){
            cin>>arr[i];
            arr1[i] = arr[i];
        }
        int m1,m2;
        sort(arr1,arr1+4);
        
        m1 = max(arr[0],arr[1]);
        m2 = max(arr[2],arr[3]);
        if(m1==arr1[2] && m2 == arr1[3]){
            cout<<"Yes"<<endl;
        }
        else if(m2==arr1[2] && m1 == arr1[3]){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
    return 0;
}