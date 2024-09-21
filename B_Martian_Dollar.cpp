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
    int n, money; cin>>n>>money;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    
    int maxi = 0;
    

    for(int i=0; i<n; i++){
        
        for(int j=i; j<n; j++){
            int cap = money/arr[i];
            int extra = money%arr[i];
            int got = cap*arr[j];

            maxi = max(maxi, extra+got);
        }
    }

    cout<<maxi;

    return 0;
}