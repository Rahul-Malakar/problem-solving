#include <stdio.h>
#include <stdlib.h>

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }

    int tmp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = tmp;

    return i+1;
}

int getKth(int arr[], int low, int high, int k) {
    int pi = partition(arr, low, high);

    if (pi == k) {
        return arr[pi];
    } else if (pi < k) {
        return getKth(arr, pi + 1, high, k);
    } else if (pi > k) {
        return getKth(arr, low, pi - 1, k);
    } else {
        return -1;
    }
}

int findKthLargest(int nums[], int k, int size) {
    return getKth(nums, 0, size - 1, size - k);
}

int main() {
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int nums[size];
    printf("Enter the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
    }

    int k=1;
    

    printf("largest element: %d\n", findKthLargest(nums, k, size));

    return 0;
}
