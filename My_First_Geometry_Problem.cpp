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
        string s; cin>>s;
        if(s=="0000"){
            cout<<1<<endl;
        }
        else if(s=="0001"){
            cout<<11<<endl;
        }
        else if(s=="0010"){
            cout<<11<<endl;
        }
        else if(s=="0011"){
            cout<<21<<endl;
        }
        else if(s=="0100"){
            cout<<11<<endl;
        }
        else if(s=="0101"){
            cout<<121<<endl;
        }
        else if(s=="0110"){
            cout<<121<<endl;
        }
        else if(s=="0111"){
            cout<<231<<endl;
        }
        else if(s=="1000"){
            cout<<11<<endl;
        }
        else if(s=="1001"){
            cout<<121<<endl;
        }
        else if(s=="1010"){
            cout<<121<<endl;
        }
        else if(s=="1011"){
            cout<<231<<endl;
        }
        else if(s=="1100"){
            cout<<21<<endl;
        }
        else if(s=="1101"){
            cout<<231<<endl;
        }
        else if(s=="1110"){
            cout<<231<<endl;
        }
        else if(s=="1111"){
            cout<<441<<endl;
        }
        

    }


    return 0;
}