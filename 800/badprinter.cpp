#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int out=0;
    cin>>s;
    for(int i = 0;i<s.length();i++){
        if(s[i]=='?'){
         out++;   
    }
    }
    if(out>0){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
    return 0;
}