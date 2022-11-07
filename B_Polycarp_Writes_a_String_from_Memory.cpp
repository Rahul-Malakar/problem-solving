// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        string s;
        cin >> s;

        int count = 0;
        int k = 0;
        while(k<s.size())
        {
            
            set<char> st;
            for (int j = k; j < s.size(); j++)
            {
                k++;
                st.insert(s[j]);
                if (st.size() == 4)
                {
                    k=j;
                    count++;
                    break;
                }
            }
        }
        cout<<count+1<<endl;
    }

    return 0;
}