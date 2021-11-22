#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

ll col_index_count(ll arr[5][5]){
    int r,c;
    for(ll i =0;i<5;i++){
        for(ll j=0;j<5;j++){
            if(arr[i][j]==1){
                r= i;
                c=j;
            }
        }
    }
    ll count=0;
    while(c!=2){
        if(c>2){
            c--;
        }
        else if(c<2){
            c++;
        }
        count++;
    }

    return count;

    
}

ll row_index_count(ll arr[5][5]){
    int r,c;
    for(ll i =0;i<5;i++){
        for(ll j=0;j<5;j++){
            if(arr[i][j]==1){
                r= i;
                c=j;
            }
        }
    }
    ll count=0;
    while(r!=2){
        if(r>2){
            r--;
        }
        else if(r<2){
            r++;
        }
        count++;
    }

    return count;
}


int main(){
    ll arr[5][5];
    for(ll i =0;i<5;i++){
        for(ll j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }

    cout<<col_index_count(arr)+row_index_count(arr)<<endl;
    
    return 0;
}