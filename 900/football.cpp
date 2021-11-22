#include <iostream>
#include <string>
using namespace std;

int main(){
    string s; int out1 =0,out2 =0,out3 =0;
    cin>>s;
    for(int i = 0;i<s.length();i++){
        if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='0' && s[i+4]=='0' && s[i+5]=='0' && s[i+6]=='0'){
            out1++;
        } 
        else if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='1' && s[i+3]=='1' && s[i+4]=='1' && s[i+5]=='1' && s[i+6]=='1'){
            out2++;
        }
        else{
            out3++;
        }
    }
    if(out1>0 || out2>0){
        cout<<"YES"<<endl;
    }
    else if(out3>0){
        cout<<"NO"<<endl;
    }

    return 0;
}