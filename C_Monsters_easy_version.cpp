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

    ll t;
    cin >> t;
    while(t--)
    {
        int a; cin>>a;
        int sum=0;
        map<int,int> m;
        for(int i=0; i<a; i++){
            int a; cin>>a;
            m[a]++;
        }
        int j=1;
        for(auto it:m){
            sum+=(it.first - j)*it.second;
        }
        cout<<sum-a<<endl; 
    }

    return 0;
}