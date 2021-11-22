#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    int a, b,p=0;
    int max= 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        p = b-a+p;
        if(max<p){
            max = p;
        }
    }
    
    cout<<max<<endl;
    return 0;
}