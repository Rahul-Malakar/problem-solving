#include <stdio.h>
#include<iostream>
using namespace std;


void spiralprint(int m, int n, int arr[3][3]){

    int k=0, l=0;

    while(k<m && l<n){

        for(int i=l; i<n; i++){
            cout<<arr[k][i]<<" ";
        }
        k++;

        for(int i=k; i<m; i++){
            cout<<arr[i][n-1]<<" ";
        }
        n--;

        for(int i=n-1; i>=l; i--){
            cout<<arr[m-1][i]<<" ";
        }
        m--;

        for(int i=m-1; i>=k; i--){
            cout<<arr[i][l]<<" ";
        }
        l++;

    }
    
}

int main(){

    int mat[5][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}};

    spiralprint(5,3, mat);

    return 0;
}