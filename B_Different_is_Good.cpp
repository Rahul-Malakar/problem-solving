// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    if (t > 26)
    {
        cout << -1;
        return 0;
    }
    string s;
    cin >> s;
    set<char> st;

    for(int i=0; i<s.size(); i++){
        st.insert(s[i]);
    }
    
    cout<<t-st.size();

    return 0;
}