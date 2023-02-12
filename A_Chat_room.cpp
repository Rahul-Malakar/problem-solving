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

    string a; cin>>a;
    int flag=0;
    for(int i=0; i<a.size(); i++){
        if(flag==0){
            if(a[i]=='h'){flag=1;}
        }
        
        else if(flag==1){
            if(a[i]=='e'){
                flag=2;
            }
        }
        else if(flag==2){
            if(a[i]=='l'){
                flag=3;
            }
        }
        else if(flag==3){
            if(a[i]=='l'){
                flag=4;
            }
        }
        else if(flag==4){
            if(a[i]=='o'){
                flag=5;
            }
        }
        
    }
    if(flag==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}