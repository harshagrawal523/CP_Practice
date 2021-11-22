#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int arr[3][3];
    for(int i =0;i<3;i++){
        for(int j = 0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int m1,m2,m3;
    vector<int> v;
    m1 = arr[0][1]+arr[0][2];
    m2 = arr[1][0] + arr[1][2];
    m3 = arr[2][0]+arr[2][1];

    int maxi = max(m3,max(m1,m2));
    if(maxi ==m3){
        arr[2][2] = (m2+m1-m3)/2;
        arr[1][1] = arr[2][2] + (m3-m2);
        arr[0][0] = arr[2][2] + (m3-m1);
    }
    else if(maxi == m2){
        arr[1][1] = (m1+m3-m2)/2;
        arr[2][2] = arr[1][1] + (m2-m3);
        arr[0][0] = arr[1][1] + (m2-m1);
    }
    else if(maxi == m1 ){
        arr[0][0] = (m2+m3-m1)/2;
        arr[2][2] = arr[0][0] + (m1-m3);
        arr[1][1] = arr[0][0] + (m1-m2);
    }
    
    for(int i =0;i<3;i++){
        for(int j = 0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}