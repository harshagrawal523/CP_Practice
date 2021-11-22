#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    string n,m;
    cin>>n>>m;

    for(int i = 0;i<n.size();i++){
        if(n[i]==m[i]){
            cout<<"0";
        }
        else{
            cout<<"1";
        }
    }
    cout<<endl;
    
    return 0;
}