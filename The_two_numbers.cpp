#include<bits/stdc++.h>

#define ll long long

using namespace std;

 

int main(){

    int t;

    cin>>t;

    while(t--){

        ll n;

        cin>>n;

        if(n == 2) cout<<0<<endl;

        else if(n == 6) cout<<4<<endl;

        else if(n % 2){

            cout<<(n/2)*(n/2+1) - 1<<endl;

        }

        else if((n/2) % 2 == 0){

            cout<<(n/2-1)*(n/2+1)-1<<endl;

        }

        else

        {

            cout<<(n/2-1)*(n/2+1)-2<<endl;

        }

    }

}