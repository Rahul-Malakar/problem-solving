// RAHUL MALAKAR 2112022

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

#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.rbegin(), v.rend())

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    while (t--)
    {
        string a,b,c; cin>>a>>b>>c;

        if(a[0] == a[1] && a[1] == a[2] && a[0]!='.'){
            cout<<a[0]<<endl;
            
            continue;
        }
        else if(b[0] == b[1] && b[1] == b[2] && b[0]!='.'){
            cout<<b[0]<<endl;
            
            continue;
        }
        else if(c[0] == c[1] && c[1] == c[2] && c[0]!='.'){
            cout<<c[0]<<endl;
            
            continue;
        }
        else if(a[0] == b[0] && b[0] == c[0] && c[0]!='.'){
            cout<<a[0]<<endl;
            
            continue;
        }
        else if(a[1] == b[1] && b[1] == c[1] && a[1]!='.'){
            cout<<b[1]<<endl;
            continue;
        }
        else if(a[2] == b[2] && b[2] == c[2] && a[2]!='.'){
            cout<<c[2]<<endl;
            continue;
        }
        else if(a[0] == b[1] && b[1] == c[2] && a[0]!='.'){
            cout<<a[0]<<endl;
            continue;
        }
        else if(a[2] == b[1] && b[1] == c[0] && a[2]!='.'){
            cout<<b[1]<<endl;
            continue;
        }
        else{
            cout<<"DRAW"<<endl;
        }
    }

    return 0;
}