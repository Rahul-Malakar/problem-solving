// A  is complementary to T.
// T is complementary to A.
// C is complementary to G.
// G is complementary to C

//Rahul Malakar 2112022

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);

    long long t; cin>>t;
    for(long long i=0;i<t;i++){
        int a; cin>>a;
        string s; cin>>s;
        for(int i=0; i<a; i++){
            if(s[i]=='A'){s[i]='T';}
            else if(s[i]=='T'){s[i]='A';}
            else if(s[i]=='C'){s[i]='G';}
            else if(s[i]=='G'){s[i]='C';}
        }
        cout<<s<<endl;
    }

    
    return 0;
}