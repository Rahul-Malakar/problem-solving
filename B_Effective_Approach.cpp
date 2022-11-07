// Rahul Malakar 2112022

#include <iostream>
using namespace std;
long long i,j,a,b,arr1[100500],arr2[100500],k,index[100500],A=0,B=0;
int main()
{

    cin >> a;
    for (i = 0; i < a; i++)
    {
        cin >> arr1[i];
        index[arr1[i]]=i;
    }
    
    cin >> b;
    for (j = 0; j < b; j++)
    {
        cin >> arr2[j];
    }

    for(k=0; k<b; k++){
        A+=index[arr2[k]]+1;
        B+=a-index[arr2[k]];
    }

    cout<<A<<" "<<B;
    return 0;
}