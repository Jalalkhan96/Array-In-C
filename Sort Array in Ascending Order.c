#include <stdio.h>

// Sort Array in Ascending Order.c
// Sorts an integer array in ascending order using bubble sort: neighbouring
// elements are swapped until the whole array is in order.

void sortAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int size) {
    printf("{");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("}");
}

int main() {
    int arr1[] = {5, 2, 9, 1, 7};
    int arr2[] = {1, 2, 3, 4, 5};
    int arr3[] = {3, 3, 1, 2, 2};

    printArray(arr1, 5);
    sortAscending(arr1, 5);
    printf(" -> ");
    printArray(arr1, 5);
    printf("\n");

    printArray(arr2, 5);
    sortAscending(arr2, 5);
    printf(" -> ");
    printArray(arr2, 5);
    printf("\n");

    printArray(arr3, 5);
    sortAscending(arr3, 5);
    printf(" -> ");
    printArray(arr3, 5);
    printf("\n");

    return 0;
}
