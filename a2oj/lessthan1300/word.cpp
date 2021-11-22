#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin>>s;
    
    int up=0,low=0;
    for(int i = 0;i<s.length();i++){
        if(isupper(s[i])){
            up++;
        }
        else{
            low++;
        }
    }
    if(up>low){
        transform(s.begin(),s.end(),s.begin(), ::toupper);
        cout<<s<<endl;
    }
    else{
        
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        cout<<s<<endl;
    }
    return 0;
}