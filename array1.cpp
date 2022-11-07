#include<iostream>
using namespace std;

int main(){

    int arr[6];
    for(int i=0; i<6; i++){
        cin>>arr[i];
    }

    int d; cin>>d;
    for(int j=d; j<6+d; j++){
        cout<<arr[j%6]<<" " ;
    }

    return 0;
}