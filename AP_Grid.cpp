// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    long long t;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {

        ll a,b;

        cin>>a>>b;
        ll arr[a][b];
        if(a <= b){

            for(int i=0; i<a; i++){

                for(int i2=0; i2<b;i2++){

                    if(i == 0) arr[i][i2] = i2+1;

                    else arr[i][i2] = arr[i-1][i2] + a + i2 + 1;

                }

            }

        }

        else

        {

            for(int i=0; i<a; i++){

                for(int i2=0; i2<b;i2++){

                    if(i2 == 0) arr[i][i2] = i+1;

                    else arr[i][i2] = arr[i][i2-1] + b + i + 1;

                }

            }

        }

        for(int i=0; i<a; i++){

            for(int i2=0; i2<b;i2++){

                cout<<arr[i][i2]<<" ";

            }

            cout<<endl;

        }

    }

}
        
        
        // ll a, b;
        // cin >> a >> b;
        // ll arr[a][b];
        // if (a > b)
        // {
        //     ll num=1;
        //     ll jnum=1;
        //     for (ll i = 0; i < a; i++)
        //     {

        //         for (ll j = 0; j < b; j++)
        //         {
        //             if(j==0){num=jnum;}
        //             cout<<num<<" ";
        //             num+=2*jnum;
                    
        //         }
        //         cout<<endl;
        //         jnum+=1;
                
        //     }
        // }
        // else
        // {
        //     ll num = 1;
        //     ll jnum = 1;
        //     for (ll i = 0; i < a; i++)
        //     {

        //         for (ll j = 0; j < b; j++)
        //         {
        //             if (j == 0)
        //             {
        //                 num = jnum;
        //             }
        //             cout << num << " ";
        //             num += jnum;
        //         }
        //         cout << endl;
        //         jnum += 2;
        //     }
        // }