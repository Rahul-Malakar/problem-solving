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
        int left[a], right[a];
        map<pair<int,int>,int> mp;
        for(int i=0; i<a; i++){
            cin>>left[i]>>right[i];

            mp[{left[i],right[i]}]++;
        }
        for(int i =0; i<a; i++){
            for(int j=left[i]; j<right[i]; j++){
                if(left[i]==right[i]){
                    cout<<left[i]<<" "<<right[i]<<" "<<left[i]<<endl;
                }
                if(mp[{left[i],j-1}]==1 && mp[{j+1,right[i]}] ){
                    cout<<left[i]<<" "<<right[i]<<" "<<j<<endl;
                }
                if(j==left[i] && mp[{j+1,right[i]}] || j==right[i] && mp[{left[i],j-1}]){
                    cout<<left[i]<<" "<<right<<" "<<j<<endl;
                }
            }
        }

        
    }

    return 0;
}