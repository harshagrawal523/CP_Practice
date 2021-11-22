#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin>>s;
    if(isupper(s[0])){
        cout<<s<<"\n";
    }
    else{
        char c = toupper(s[0]);
        s[0] = c;
        cout<<s<<"\n";
    }
    return 0;
}