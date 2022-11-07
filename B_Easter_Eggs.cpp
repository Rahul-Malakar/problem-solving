//Rahul Malakar 2112022

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    long long t; cin>>t;
    string s="";
    char arr[7]={'V','I','B','G','Y','O','R'};
    for(long long i=0;i<t;i++){
        s+=arr[i%7];
    }
    int rem=t%7;
    if(rem==3){
        s[t-3]='G';
        s[t-2]='Y';
        s[t-1]='O';
        cout<<s;
        return 0;
    }
    else if(rem==2){
        s[t-2]='G';
        s[t-1]='Y';
        cout<<s;
        return 0;
    }
    else if(rem==1){
        s[t-1]='G';
        cout<<s;
        return 0;
    }
    else{
        cout<<s;
        return 0;
    }
    
    
}