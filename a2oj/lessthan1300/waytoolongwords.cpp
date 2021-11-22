#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s.length()>10){
            string r = s.substr(1,s.length()-2);
            cout<<s[0]<<r.length()<<s[s.length()-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }

    }

    return 0;
}