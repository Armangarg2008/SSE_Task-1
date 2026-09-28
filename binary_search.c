#include <stdio.h>

int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1; 
        else
            right = mid - 1; 
    }
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 18, 24, 33, 45, 108, 333};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 45;

    int result = binarySearch(arr, 0, size - 1, target);
    if (result != -1) {
        printf("Binary Search: Element %d found at index %d\n", target, result);
    } else {
        printf("Binary Search: Element %d not found\n", target);
    }
    return 0;
}