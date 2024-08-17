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

    vector<ll> numbers;

    for(ll i=0; i<7; i++){
        ll a; cin>>a;
        numbers.emplace_back(a);
    }

    sort(numbers.begin(), numbers.end());

    ll first = numbers[0];
    ll second = numbers[1];
    ll need = first+second;

    ll maxi = *max_element(numbers.begin(), numbers.end());
    
    ll third = maxi - need;

    cout<<first<<" "<<second<<" "<<third;
    return 0;
}
