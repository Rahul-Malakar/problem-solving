
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

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    while (t--)
    {
        std::string s;
        std::cin >> s;

        int n = s.size();

        int pos = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] == 'a')
            {
                pos = i;
                break;
            }
        }

        if (pos)
        {
            std::cout << s.substr(0,pos) << " " << 'a' << " " << s.substr(pos + 1) << "\n";
        }
        else
        {
            std::cout << s[0] << " " << s.substr(1, n - 2) << " " << s[n - 1] << "\n";
        }
    }

    return 0;
}