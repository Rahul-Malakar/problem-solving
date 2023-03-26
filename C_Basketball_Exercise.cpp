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

int dp[100][100];

int solve(vector<int> v1, vector<int> v2, int i, int pre){

    int pick,dontpick;
    if(i==0){
        return 0;
    }
    if(pre==0){
        int pick = solve(v1,v2,i-1,1) + v1[i];
        int dontpick = max(solve(v1,v2,i-1,0), solve(v1,v2,i-1,1));
    }
    
    dp[i][pre] = max(pick,dontpick);
    
}


int main()
{
    
    ios_base::sync_with_stdio(false);

    int a; cin>>a;
    vector<int> v1,v2;
    for(int i=0; i<a; i++){
        int b; cin>>b;
        v1.eb(b);
    }
    for(int i=0; i<a; i++){
        int c; cin>>c;
        v2.eb(c);
    }

    solve(v1,v2,0,0);
    

    return 0;
}