//Rahul Malakar 2112022

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    long long t; cin>>t;
    for(long long i=0;i<t;i++){
        int a; cin>>a;
        int k=0;
        if(a%3==1){
            k=((a+2)/3)+1;
            cout<<k-2<<" "<<k<<" "<<k-3<<endl;
        }
        else if(a%3==2){
            k=((a+1)/3)+1;
            cout<<k-1<<" "<<k<<" "<<k-3<<endl;
        }
        else if(a%3==0){
            k=(a/3)+1;
            cout<<k-1<<" "<<k<<" "<<k-2<<endl;
        }

    }
    
    return 0;
}