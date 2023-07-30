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
    vector<int> v;
    sort(v.begin(), v.end());
    while(t--)
    {
        ll a; cin>>a;
        ll sum=a;
        ll alw=0, alb=0, bobw=0, bobb=0;
        ll i=1,j=0;
        
        while(sum>=i){
            
            if(j&1){
                bobw+=i/2;                
                bobb+=i/2+1;
                sum-=i;
                i+=4;
                
            }
            else{
                alw+=i/2 +1;
                alb+=i/2;
                sum-=i;
                i+=4;
            }
            j++;
           
        }
        if(j&1){
            if(sum&1){
                cout<<alw<<" "<<alb<<" "<<bobw+(sum/2)<<" "<<bobb+(sum/2+1)<<" "<<endl;
            }
            else{
                cout<<alw<<" "<<alb<<" "<<bobw+(sum/2)<<" "<<bobb+(sum/2)<<" "<<endl;
            }
            
        }
        else{
            
            if(sum&1){
                cout<<alw+(sum/2+1)<<" "<<alb+(sum/2)<<" "<<bobw<<" "<<bobb<<" "<<endl;
            }
            else{
                cout<<alw+(sum/2)<<" "<<alb+(sum/2)<<" "<<bobw<<" "<<bobb<<" "<<endl;
            }
        }
        
        
        
    }

    return 0;
}