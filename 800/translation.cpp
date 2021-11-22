#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int output=0;
    string trans_s;
    cin>>s;
    cin>>trans_s;
    for(int i =0;i<s.length();i++){
       if(trans_s[i]==s[s.length()-1-i]){
           output++;
       }
       
       
    }
    if(output==s.length()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   
    
    
    return 0;
}