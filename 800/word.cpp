#include <iostream>
#include<string>

using namespace std;

int main(){
    int up = 0,lo=0;
    string s;
    cin>>s;

    for(int i = 0; i<s.length();i++){
        if(isupper(s[i])){
            up++;
        }
        else{
            lo++;
        } 
    }
    if(up>lo){
        for(int i = 0; i<s.length();i++){
            s[i]=toupper(s[i]);
        }
        cout<<s<<endl;
    }
    else if(up<lo || up == lo){
        for(int i = 0; i<s.length();i++){
            s[i]=tolower(s[i]);
        }
         cout<<s<<endl;
    }
      
   

    return 0;
}