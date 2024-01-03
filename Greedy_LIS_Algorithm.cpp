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
    
    ll t; cin>>t;
    while (t--)
    {
        int a,b; cin>>a>>b;
        vi v;
        for(int i=1; i<=a; i++){
            v.eb(i);
        }
        if(b==0){
            for(auto it:v){
                cout<<it<<" ";
            }
            cout<<endl;
            continue;
        }
        else if(a-b<2){
            cout<<-1<<endl;
            continue;
        }
        else{
            vi result(a,0);
            result[a-b-2] = a;
            int voro =1;
            for(int i=0; i<a; i++){
                if(result[i]!=0){
                    continue;
                }
                else{
                    result[i] = voro;
                    voro++;
                }
            }
            for(auto it:result){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
    

    return 0;
}