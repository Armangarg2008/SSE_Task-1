#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; 
}

int main() {
    int arr[] = {10, 365, 69, 67, 18, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 69;

    int result = linearSearch(arr, size, target);
    if (result != -1) {
        printf("Linear Search: Element %d found at index %d\n", target, result);
    } else {
        printf("Linear Search: Element %d not found\n", target);
    }
    return 0;
}
