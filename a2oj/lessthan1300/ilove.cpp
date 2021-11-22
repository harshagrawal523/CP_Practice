#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int ma = 0;
    int mi = INT_MAX;
    int count=0;
    for(int i = 1;i<n;i++){
        for(int j = 0;j<i;j++){
            ma = max(ma,arr[j]);
            mi = min(mi,arr[j]);
        }
        if(arr[i]>ma){
            count++;
        }
        else if(arr[i]<mi){
            count++;
        }
    }
    cout<<count;
    return 0;
}