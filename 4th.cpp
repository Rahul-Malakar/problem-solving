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
    for(int iter=1; iter<=t; iter++)
    {
        int n; cin>>n;
        int lage = n/26;
        float k = (-1 + sqrt(1 + 8*lage))/2;


        if(k==0){
            cout<<"Case #"<<iter<<": "<<char(n+'A'-1)<<endl;
        }
        else{
            if(floor(k)==ceil(k)){
                if(n-(k*26)==0){
                    k-=1;
                }
            }
            else{
                k=floor(k);
            }
            n-=(k*26);
            
            int printkora = n/(k+1);
            cout<<"Case #"<<iter<<": "<<char(printkora+'A')<<endl;
        }
    
    }

    return 0;
}