#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
typedef long long ll;
#define int int64_t

int arr[(int)1e6 + 10];
set<int> tprime;

void t_primes()
{
    tprime.insert(4);
    for (int i = 3; i < (int)1e6 + 1; i += 2)
    {
        if (arr[i] == 0)
        {
            tprime.insert(i * i);
            for (int j = i; j < (int)1e6; j += i)
            {
                arr[j] = 1;
            }
        }
    }
}

int32_t main()
{
    int n;cin>>n;
    t_primes();
    for(int i =0;i<n;i++){
        int x;cin>>x;
        if(tprime.find(x)!=tprime.end()){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}