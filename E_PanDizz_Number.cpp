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
#define sortd(v) sort(v.rbegin(), v.rend())

// set<int> check(string s, int mini, int maxi)
// {
//     set<int> st;
//     int range = mini;
//     for (int i = 0; i <= s.size() - 1; i++)
//     {
//         if (range != (s[i] - '0'))
//         {
//             return 0;
//         }
//         range++;
//     }
//     return 1;
// }

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    while (t--)
    {
        int mini = INT_MAX, maxi = 0;
        string s;
        cin >> s;
        set<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            st.insert(s[i]);
            mini = min(s[i] - '0', mini);
            maxi = max(s[i] - '0', maxi);
        }
        
        
        int range=mini;
        int flag=0;
        sort(s.begin(), s.end());
        for(auto it:st){
            if((it-'0')!=range){
                flag=1;
                break;
            }
            range++;
        }
        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl<<mini<<" "<<maxi<<endl;
        }     
    }

    return 0;
}