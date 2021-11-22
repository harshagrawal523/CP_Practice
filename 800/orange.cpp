#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,x=0;
    double a;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<n;i++ ){
        x += arr[i];
    }
    a = x/(double)n;
   
    cout<<a;
    return 0;
}