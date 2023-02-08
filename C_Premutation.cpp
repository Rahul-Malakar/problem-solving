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
       int a; cin>>a;
       int countfirst=0, second=0;
       vi v;
       int arr[a][a-1];
       for(int i=0; i<a; i++){
            for(int j=0; j<a-1; j++){
                int b; cin>>b;
                arr[i][j]=b;
                if(j==0){
                    v.eb(b);
                }
            }   
       }
       sort(v.begin(),v.end());
       if(v[0]!=v[1]){
            countfirst=v[1];
            second=v[0];
       }
       else if(v[a-1]!=v[a-2]){
            countfirst=v[a-2];
            second=v[a-1];
       }
       cout<<countfirst<<" ";
       int flag=0;
       for(int i=0; i<a; i++){
            for(int j=0; j<a-1; j++){
                if(arr[i][0]==second){
                    flag=1;
                    cout<<arr[i][j]<<" ";
                }
                
            }
            if(flag){break;}
       }
       cout<<endl;

    }

    return 0;
}