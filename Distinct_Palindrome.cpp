// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);

    long long t;
    cin >> t;
    for (long long i = 0; i < t; i++)
    {
        string s = "abcdefghijklmnopqrstuvwxyz";
        string halfs = "";
        string ultahalf="";
        int a, b;
        cin >> a >> b;
        if (a % 2==0)
        {
            if (b > a / 2)
            {
                cout << -1 << endl;
            }
            else
            {
                int stop=0;
                for(int i=0; i<a/2; i++){
                    if(i==b-1){
                        stop=i;
                    }
                    if(i>=b){
                        halfs+=s[stop];
                    }
                    else{
                        halfs+=s[i];
                    }
                }
                for(int i=halfs.size()-1; i>=0; i--){
                    ultahalf+=halfs[i];
                }
                cout<<halfs+ultahalf<<endl;
            }
        }
        else
        {
            if ((a / 2) + 1 < b)
            {
                cout << -1<<endl;
            }
            else if((a / 2) + 1 == b){
                for(int i=0; i<b; i++){
                    halfs+=s[i];
                }
                for(int i=halfs.size()-2; i>=0; i--){
                    ultahalf+=halfs[i];
                }
                cout<<halfs+ultahalf<<endl;
            }
            else
            {
                int stop=0;
                for(int i=0; i<(a/2)+1; i++){
                    if(i==b-1){
                        stop=i;
                    }
                    if(i>=b){
                        halfs+=s[stop];
                    }
                    else{
                        halfs+=s[i];
                    }
                }
                for(int i=halfs.size()-2; i>=0; i--){
                    ultahalf+=halfs[i];
                }
                cout<<halfs+ultahalf<<endl;
            }
        }
        
    }
    

    return 0;
}