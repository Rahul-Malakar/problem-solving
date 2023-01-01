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

#define forl(i, n) for (int i = 0; i < n; i++)
#define forle(i, n) for (int i = 0; i <= n; i++)

#define sorti(v) sort(v.begin(), v.end())

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    forl(i, t)
    {
        ll a;
        cin >> a;
        if (a == 3)
        {
            cout << 1 << " " << 2 << endl;
            continue;
        }

        ll mina = a / 2;
        ll minb = a / 2 + 1;
        if (a & 1)
        {
            // -------------------------------------------------------------------
            // while (mina > 1)
            // {
            //     if (((mina - 1) * (minb + 1)) / __gcd(minb + 1, mina - 1) < ((mina) * (minb)) / __gcd(minb, mina))
            //     {
            //         if (((mina - 1) * (minb + 1)) / __gcd(minb + 1, mina - 1) < ((ansa) * (ansb)) / __gcd(ansa, ansb))
            //         {
            //             ansa = mina - 1;
            //             ansb = minb + 1;
            //             mina -= 1;
            //             minb += 1;
            //         }
            //         else
            //         {
            //             mina -= 1;
            //             minb += 1;
            //         }
            //     }
            //     else
            //     {
            //         mina -= 1;
            //         minb += 1;
            //     }
            // }
            // cout << ansa << " " << ansb;
            // --------------------------------------------------------------------------------------------
            // if(!(mina&1)){
            //     mina-=1; minb+=1;
            // }
            // while(__gcd(mina,minb)!=mina){
            //     minb+=2; mina-=2;
            // }
            // cout<<mina<<" "<<minb;
            // ----------------------------------------------------------------------------------------------
            
            
        }
        else
        {
            cout << a / 2 << " " << a / 2;
        }
        cout << endl;
    }

    return 0;
}