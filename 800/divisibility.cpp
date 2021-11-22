#include <iostream>
#include <string>
using namespace std;

int main(){
    long long int t,x,y;
    
    cin>>t;
    
    for(int i = 0;i<t;i++){
        cin>>x>>y;
        if(x%y==0){
            cout<<"0"<<endl;
        }
        else{
          cout<<y-(x%y)<<endl;
        }
    }
    
    return 0;
}