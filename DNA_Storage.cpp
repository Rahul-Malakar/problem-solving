//Rahul Malakar 2112022

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    long long t; cin>>t;
    for(long long i=0;i<t;i++){
        int a; cin>>a;
        string s;
        cin>>s;
        string news="";
        for(int i=0; i<a-1; i+=2){
            if(s[i]=='0' && s[i+1]=='0'){
                news.push_back('A');
            }
            else if(s[i]=='0' && s[i+1]=='1'){
                news.push_back('T');
            }
            else if(s[i]=='1' && s[i+1]=='0'){
                news.push_back('C');
            }
            else if(s[i]=='1' && s[i+1]=='1'){
                news.push_back('G');
            }
        }
        cout<<news<<endl;
    }
    
    return 0;
}