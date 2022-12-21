//Q 3
#include<stdio.h>
#include<stdlib.h>

int partition(int* arr , int l , int r){
    int pivot = arr[r];
    int i = l - 1;
    for(int j = l; j < r; ++j){
        if(arr[j] < pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[r];
    arr[r] = temp;
    return i + 1;
}

int kth_smallest(int* arr , int l , int r , int k){
    if(k > 0 && k <= r - l + 1){
        int pos = partition(arr , l , r);
        if(pos - l == k - 1){
            return arr[pos];
        }
        if(pos - l > k - 1){
            return kth_smallest(arr , l , pos - 1 , k);
        }
        return kth_smallest(arr , pos + 1 , r , k - pos + l - 1);
    }
    return -1;
}


int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d" , &n);
    int* arr = malloc(sizeof(int) * n);
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; ++i){
        scanf("%d" , &arr[i]);
    }
    int k;
    printf("Enter the value of k: ");
    scanf("%d" , &k);
    printf("The %dth smallest element is: %d\n" , k , kth_smallest(arr , 0 , n - 1 , k));
    return 0;
}