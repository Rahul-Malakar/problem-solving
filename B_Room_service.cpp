//RAHUL MALAKAR 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        int a; cin>>a;
        string s; cin>>s;
        int shu=0, shi=0;
        sort(s.begin(), s.end());
        for(int i=a-1; i>=0; i-=2){
            shu+=s[i];
        }
        for(int i=a-2; i>=0; i-=2){
            shi+=s[i];
        }
        if(shi>=shu){
            cout<<"SHUBHAM"<<endl;
        }
        else{
            cout<<"SHIVAM"<<endl;
        }
    }

    return 0;
}