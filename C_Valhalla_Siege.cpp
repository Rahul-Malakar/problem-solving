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


int main()
{
    
    ios_base::sync_with_stdio(false);

    int t1,t2; cin>>t1>>t2;
    vll v1,v2;
    for(int i=0; i<t1; i++){
        int a; cin>>a;
        v1.eb(a);
    }
    for(int i=0; i<t2; i++){
        int b; cin>>b;
        v2.eb(b);
    }

    

    return 0;
}