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
    int t; cin>>t;
    while(t--){
        float n; cin>>n;
        string s; cin>>s;
        float squirt = sqrt(n); 
        if(floor(squirt) != ceil(squirt)){
            cout<<"No"<<endl;
        }
        else{
            float count = 0;
            for(auto it:s){
                if(it=='0'){
                    count++;
                }
            }
            if(n<9 && int(count)==0){
                cout<<"Yes"<<endl;
            }
            else if(count!= (squirt-2)*(squirt-2)){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
    }

    return 0;
}