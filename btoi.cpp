#include <bits/stdc++.h>
using namespace std;

int main(){
    int a; cin>>a;
    int b=0;
    int i=0;
    while(a>0){
        b+=(a%2)*i;
        a/=2;
        i*=10;

    }
    cout<<b;

}