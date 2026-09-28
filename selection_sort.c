#include <stdio.h>

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int min_id = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_id]) {
                min_id = j;
            }
        }
        int temp = arr[min_id];
        arr[min_id] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int arr[] = {69, 23, 17, 24, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    printf("Selection Sorted array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}