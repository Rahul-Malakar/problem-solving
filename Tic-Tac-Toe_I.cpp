// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;

    for (ll i = 0; i < t; i++)
    {
        char arr[3][3];
        int countx=0, counto=0;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                cin>>arr[i][j];
                if(arr[i][j]=='X'){
                    countx++;
                }
                else if(arr[i][j]=='O'){
                    counto++;
                }
            }
        }
        
        if(countx-counto==0 || countx-counto==1){
            cout<<"yes"<<endl;
            continue;
        }
        else{
            cout<<"no"<<endl;
        }
    }

    return 0;
}