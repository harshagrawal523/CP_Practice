#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int count;
    string u;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[i+1]){
            count++;
        }
    }
    if(s.length()%2==0){
        cout<<"CHAT WITH HER\n";
    
    }
    else{
        cout<<"IGNORE HIM\n";
    }
    return 0;
}