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

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        string s;
        cin >> s;
        char cur = ' ';
        for (int i = 0; i < s.size(); i++)
        {
            cur = s[i];
            if (s[i] != '0' || s[i] != '1')
            {
                for (int j = 0; j < s.size(); j++)
                {
                    if (s[j] == cur)
                    {
                        if (i & 1)
                        {
                            s[j] = '1';
                        }
                        else
                        {
                            s[j] = '0';
                        }
                    }
                }
            }
        }
        int flag=0;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]==s[i+1]){
                flag=1;
                break;
            }
        }
        if(flag){cout<<"NO"<<endl;}
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}