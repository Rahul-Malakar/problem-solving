// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int arr[a][b];
        if ((b/2)%2==0)
        {
            int flag=0;
            for (int i = 0; i < a; i+=2)
            {
                for (int j = 0; j < b; j+=2)
                {
                    if(!flag){
                        arr[i][j]=1; arr[i][j+1]=0; arr[i+1][j+1]=1; arr[i+1][j]=0;
                    }
                    else{
                        arr[i][j]=0; arr[i][j+1]=1; arr[i+1][j+1]=0; arr[i+1][j]=1;
                    }
                    flag=flag^1;

                }
                flag=flag^1;
            }
        }
        else
        {
            int flag=0;
            for (int i = 0; i < a; i+=2)
            {
                for (int j = 0; j < b; j+=2)
                {
                    if(!flag){
                        arr[i][j]=1; arr[i][j+1]=0; arr[i+1][j+1]=1; arr[i+1][j]=0;
                    }
                    else{
                        arr[i][j]=0; arr[i][j+1]=1; arr[i+1][j+1]=0; arr[i+1][j]=1;
                    }
                    flag=flag^1;

                }
            }
        }

        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}