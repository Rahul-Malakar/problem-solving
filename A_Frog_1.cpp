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


// int solve(int i, vector<int> v, vector<int> dp){

//     if(i==0){
//         return 0;
//     }
//     if(dp[i]!=-1){
//         return dp[i];
//     }
//     int left = solve(i-1, v, dp) + abs(v[i]-v[i-1]);
//     int right = INT_MAX;
//     if(i>1){
//         right = solve(i-2, v, dp) + abs(v[i]-v[i-2]);
//     }
    
//     return dp[i]=min(left,right);

// }


int main()
{
    
    ios_base::sync_with_stdio(false);

    int a; cin>>a;
    // vector<int> dp(a+1,-1);
    vector<int> v;
    for(int i=0; i<a; i++){
        int b; cin>>b;
        v.eb(b);
    }
    // dp[0]=0;
    int cur, pre=0, pre2=0;
    
    for(int i=1; i<a; i++){
        int fs = pre + abs(v[i-1]-v[i]);
        int ss = INT_MAX;
        if(i>1){
            ss = pre2 + abs(v[i-2]-v[i]);
        }
        cur= min(fs,ss);
        pre2 = pre; pre = cur;
    }

    cout<<pre;

    return 0;
}