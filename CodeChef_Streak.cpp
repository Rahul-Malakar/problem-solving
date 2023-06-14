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
#define sortd(v) sort(v.rbegin(), v.rend())

int main()
{
    
    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    while(t--)
    {
        int n; cin>>n;
        int om=0, ad=0, z=0;
        int mom=0, mad=0;
        for(int i=0; i<n; i++){
            int a; cin>>a;
            if(a==0){
                om=0;
            }
            else{
                om++;
                mom = max(om,mom);
            }
            
        }
        for(int i=0; i<n; i++){
            int b; cin>>b;
            if(b==0){
                ad=0;
            }
            else{
                ad++;
                mad = max(ad,mad);
            }
            
        }
        if(mad>mom){
            cout<<"Addy"<<endl;
        }
        else if(mom>mad){
            cout<<"Om"<<endl;
        }
        else{
            cout<<"Draw"<<endl;
        }
    }

    return 0;
}