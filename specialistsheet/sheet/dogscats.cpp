#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
#define int int64_t 
//harshagrawal
int32_t main(){
     int t;
   cin >> t;
   for(int h = 1; h <= t; h++){
       int n, d, c, m;
       cin >> n >> d >> c >> m;
       string s;
       cin >> s;
       int fd = d, fc = c, flag = 0;
       int arr[n] = {0};
    
       if(s[n-1] == 'D'){
           arr[n-1]=1;
       }
       else{
           arr[n-1] = 0;
       }
       for(int i = n-2; i >= 0; i--){
           if(s[i] == 'D'){
               arr[i] = arr[i+1]+1;
           }
           else{
               arr[i] = arr[i+1];
           }
       }
       for(int i = 0; i < n; i++){
           if(arr[i] == 0) {
               break;
           }
           if(s[i] == 'C'){
               fc--;
           }
           else{
               fd--;
               fc += m;
           }
           if(fd == -1 || fc == -1) {
               flag = 1;
               break;
           }
       }
       if(flag == 0) cout << "Case #" << h << ": " << "YES" <<"\n";
       else cout << "Case #" << h << ": " << "NO" <<"\n";
   }
    return 0;
}