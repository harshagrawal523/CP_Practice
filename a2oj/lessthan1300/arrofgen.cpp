#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin>>n;
    
    int ma = 0;
    int mi = 110;
    int maxi=0,mini=0;
    for(int i =1;i<=n;i++){
        int a;
        cin>>a;
        if(a>ma){
            ma = a;
            maxi = i;
        }
        else if(a<=mi){
            mi = a;
            mini = i;
        }
    }
    
    if(maxi>mini){
       cout<<(maxi-1) + (n-mini)-1;

    }
    else{
    cout<<(maxi-1) + (n - mini);
    }
    return 0;
}