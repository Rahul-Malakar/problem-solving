// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    int a, b;
    cin >> a >> b;
    int diff=0;
    set<int> v;
    char arr[a][b];
    for (int i = 0; i < a; i++)
    {
        int g=0, s=0;
        for (int j = 0; j < b; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]=='G'){
                g=j;
            }
            else if(arr[i][j]=='S'){
                s=j;
            }
        }
        if(g<s){
            
            v.insert(s-g);
        }
        else{
            cout<<-1;
            return 0;
        }
        
    }
    cout<<v.size();

    return 0;
}