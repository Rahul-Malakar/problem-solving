//Rahul Malakar 2112022

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    long long t; cin>>t;
    
    for(long long i=0;i<t;i++){
        int a; cin>>a;
        string s; cin>>s;
        int sum=0;
        for(int i=1; i<a-1; i++){
            if(s[i]=='1' && s[i-1]=='0'){
                sum+=1;
            }
        }
        if(s[a-2]=='0'){
            sum+=1;
        }
        if(s[0]=='1'){
            sum++;
        }
        cout<<sum<<endl;
    }
    
    return 0;
}