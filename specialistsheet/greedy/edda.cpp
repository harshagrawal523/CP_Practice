#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if((x+y)%2==0){
            if(x%2==0 && y%2==0){
                cout<<x/2<<" "<<y/2<<endl;
            }
            else{
                if(x<=((x+y)/2)){
                    cout<<x<<" "<< (x+y)/2 - x<<endl;
                }
                else if(y<=((x+y)/2)){
                    cout<<(x+y)/2 - y<<" "<<y<<endl;
                }
            }
        }
        else{
            cout<<-1<<" "<<-1<<endl;
        }
    }
    return 0;
}