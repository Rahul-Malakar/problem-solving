#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a; cin>>a;
    string s; cin>>s;

    string news(a,'0');
    int l=a/2 -1, r=a/2;
    for(int i=0; i<a; i++){
        if(a&1){
            
            if(i%2==0){
                news[r]=s[i];
                r++;
            }
            else{
                news[l]=s[i];
                l--;
            }
        }
        else{
            if(i%2==0){
                news[l]=s[i];
                l--;
            }
            else{
                
                news[r]=s[i];
                r++;
            }
        }
    }
    cout<<news<<endl;

    return 0;
}