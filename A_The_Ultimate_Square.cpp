//RAHUL MALAKAR 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

#define sp setprecision
#define eb emplace_back

#define vi vector<int>
#define vll vector<long long>
#define si set<int>
#define sll set<int>


#define forl(i,n) for(int i=0; i<n; i++)
#define forle(i,n) for(int i=0; i<=n; i++)

#define sorti(v) sort(v.begin(), v.end())


int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    forl(i,t)
    {
        ll a; cin>>a;
        if(a%2==0){
            cout<<a/2<<endl;
        }
        else{
            cout<<(a+1)/2<<endl;
        }
    }

    return 0;
}