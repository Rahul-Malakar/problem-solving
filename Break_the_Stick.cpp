//Rahul Malakar 2112022

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    long long t; cin>>t;
    for(long long i=0;i<t;i++){
        int a,b;
        cin>>a>>b;
        if(b==1 || b==a){
            cout<<"YES"<<endl;
        }
        else if(a%2==0 && b%2==0){
            cout<<"YES"<<endl;
        }
        else if(a%2!=0 && b%2==0){
            cout<<"NO"<<endl;
        }
        else if(a%2!=0 && b%2!=0){
            cout<<"YES"<<endl;
        }
        else if(a%2==0 && b%2!=0){
            cout<<"YES"<<endl;
        }
    }

    
    return 0;
}