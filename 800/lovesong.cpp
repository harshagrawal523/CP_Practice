#include <iostream>
#include <string>
using namespace std;
typedef long long ll;


int main(){
    ll  n;
    ll q;
    string s;
    cin>>n>>q;
    cin>>s;
    int arr[n];
    arr[0] = (s[0]-'a')+1;
    for(int i = 1;i<n;i++){
        arr[i] = ((s[i]-'a')+1) + arr[i-1];

    }
    cout<<endl;
    while(q--){
        ll l,r;
        cin>>l>>r;
        if(l>1) cout<<arr[r-1] - arr[(l-1)-1];
        else cout<<arr[r-1];
        // ll sum = a + b +c;
        cout<<endl;
    }
    return 0;
}