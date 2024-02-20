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

    int n = 224738;
    vector<bool> is_prime(n, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= n; i++)
    {
        if (is_prime[i] && (long long)i * i <= n)
        {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }

    vi primes;
    for(int i=0; i<224738; i++){
        if(is_prime[i]){
            primes.eb(i);
        }
    }
    while (t--)
    {
        int a; cin>>a;
        vi ans;
        if(a&1){
            cout<<1<<" ";
            for(int i=0; i<(a-1)/2; i++){
                cout<<primes[i]<<" "<<primes[i]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int i=0; i<a/2; i++){
                cout<<primes[i]<<" "<<primes[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}