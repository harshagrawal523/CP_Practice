#include <iostream>
#include <cstdlib>
//#include <string>
using namespace std;

int main(){
    int a , b;
    cin>>a>>b;
    int c,d;
    if(a>b || a==b){
        c=b;
    }
    else{
        c = a;
    }
    
    d = abs(a-b)/2;
    cout<<c<<" "<<d<<endl;
    return 0;
}