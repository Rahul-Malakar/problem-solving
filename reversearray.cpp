#include <iostream>
using namespace std;

void areverse(int arr[], int start, int end)
{
    if(start>=end){
        return; 
    }

    int temp = arr[start];
    arr[start]=arr[end];
    arr[end]=temp; 

    areverse(arr, start+1, end-1);
}

void printrev(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{

    
    int arr[100]={0};
    int n; cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    areverse(arr, 0, n-1);
    printrev(arr, n);
    

    return 0;
}
