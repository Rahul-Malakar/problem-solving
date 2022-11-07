// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    long long t;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {
        ll a;
        cin >> a;
        if(a<=10){
            cout<<a<<endl;

        }
        else{
            int kiba = a/100;
            int arukiba = a%100;
            if(arukiba>10-kiba){
                cout<<-1<<endl;
            }
            else{
                cout<<kiba+arukiba<<endl;
            }
        }
    }

    return 0;
}