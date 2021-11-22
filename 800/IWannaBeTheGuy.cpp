#include <iostream>
// #include <string>
using namespace std;

int main(){
    int n,n1,n2;
    int out = 0,out2 = 0;
    cin>>n;
    // cout<<endl;
    int x;
    cin>>x;
    int arr[x];
    for(int i =0;i<x;i++){
        cin>>arr[i];
    }
    // cout<<endl;
    int y;
    cin>>y;
    for(int i =0;i<y;i++){
        cin>>arr[i];
    }
    n = n1;
    n= n2;

    while(n1>0){
    
    for (int i = 0;i<x;i++){
        if(arr[i]==n1){
            n1--;
            out++;
        }
    }}
    while(n2>0){
    for(int i = 0; i<y;i++){
        if(arr[i]==n2){
            n2--;
            out2++;
        }
    }
    }
    if(out>0 && out2 >0){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }

return 0;
}