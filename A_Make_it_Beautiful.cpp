//RAHUL MALAKAR 2112022
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
    while(t--)
    {
        int a; cin>>a;
        set<int> st;
        vll v;
        for(int i=0; i<a; i++){
            int b; cin>>b;
            st.insert(b);
            v.eb(b);
        }
        if(st.size()==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            sort(v.begin(), v.end());
            int i=0, j=v.size()-1;
            while(i<j){
                cout<<v[j]<<" "<<v[i]<<" ";
                i++;
                j--;
            }
            if(v.size()%2==0){
                cout<<endl;
            }
            else{
                cout<<v[i]<<endl;
            }
        }
    }

    return 0;
}