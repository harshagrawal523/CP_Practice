#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;


bool prime(int n){
    int c= 0;
    for(int i = 1;i<=n/2;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c>1){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    int n ,m,c=0;
    cin>>n>>m;
    for(int i = n+1;i<m;i++){
        if(prime(i)){
            c++;
        }

    }
    if(c>=1){
        cout<<"NO"<<endl;
    }
    else
    {
        if(prime(m)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}