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

#define sorti(v) sort(v.begin(), v.end())
#define sortd(v) sort(v.rbegin(), v.rend())


int main()
{
    
    ios_base::sync_with_stdio(false);

    ll a,b; char c;
    cin>>a>>b; cin>>c;
    ll arr[110][110];
    
    for(ll i=1; i<=a; i++){
        for(ll j=1; j<=b; j++){
            char d; cin>>d;
            if(d=='.'){
                arr[i][j]=0;
            }
            else{
                arr[i][j]=d-'0';
            }
        }
    }

    set<ll> s;
    for(ll i=1; i<=a; i++){
        for(ll j=1; j<=b; j++){
            if(arr[i][j]==c-'0'){
                if(arr[i-1][j]!=0 && arr[i-1][j]!=c-'0'){s.insert(arr[i-1][j]);}
                if(arr[i+1][j]!=0 && arr[i+1][j]!=c-'0'){s.insert(arr[i+1][j]);}
                if(arr[i][j-1]!=0 && arr[i][j-1]!=c-'0'){s.insert(arr[i][j-1]);}
                if(arr[i][j+1]!=0 && arr[i][j+1]!=c-'0'){s.insert(arr[i][j+1]);}
            }
        }     
    }
    cout<<s.size()<<endl;


    return 0;
}