//Rahul Malakar 2112022

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    long long t; cin>>t;
    for(long long i=0;i<t;i++){
        int a,b; cin>>a>>b;
        if(a%5==0){
            if(b%5==0){
                cout<<((a/5))-((b/5))<<endl;
            }
            else{
                cout<<((a/5))-((b/5)+1)<<endl;
            }
            
        }
        else{
            if(b%5==0){
                cout<<((a/5)+1)-((b/5))<<endl;
            }   
            else{
                cout<<((a/5)+1)-((b/5)+1)<<endl;
            }
        }
        
    }
    
    return 0;
}