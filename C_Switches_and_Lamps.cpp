// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    long long  a, b;
    cin >> a >> b;

    char arr[a][b];
    for (long long  i = 1; i <= a; i++)
    {
        for (long long  j = 1; j <= b; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    long long  v=0;
    
    for(long long  i=1; i<=b; i++){
        long long  count=0;
        
        for(long long  j=1; j<=a; j++){
            if(arr[j][i]=='1'){
                count++;
                
            }
        }
        if(count==1){
            v++;
            if(v==a){
                cout<<"NO";
                return 0;
            }
        }
    }  
    cout<<"YES";
    

    return 0;
}