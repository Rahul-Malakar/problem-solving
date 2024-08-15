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
    int t;
    cin >> t;
    unordered_map<int,int> sums;
    
    for (int i = 1; i <= 500; i++)
    {
        int inside = (i * (i + 1)) / 2;
        sums[i] = inside;
    }
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int bitsforisland = sums[k] + (k-1);
        if(bitsforisland>n){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}
