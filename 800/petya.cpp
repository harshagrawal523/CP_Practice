#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string a;
    string b;
    cin>> a;
    cin>> b;
    if (a.length()>=1 && a.length()<=100 && b.length()>=1 && b.length()<=100) {
        if(a.length()==b.length()){
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        transform(b.begin(), b.end(), b.begin(), ::tolower);
        //  cout << a;
        //  cout << b;
         int rs = a.compare(b);

         if (rs == 0)
        {
             cout << "0";
        }
         if(rs<0)
        {
            cout << "-1";
        }
         if(rs>0)
        {
            cout << "1";
        }


        }

    }


    return 0;
}