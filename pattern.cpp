// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    for (int i=0; i<n; i++) {
        for (int j=0; j<2*n; j++) {
            if(j==n-i || j==n+i || (i==n-1 && j%2!=0)){
                cout<<'*';
            }
            else{
                cout<<" ";
            }
        
        }
        cout << '\n';
    }

    return 0;
}