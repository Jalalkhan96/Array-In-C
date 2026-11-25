#include <stdio.h>

// Kth Largest Element.c
// Finds the kth largest element of an integer array (k = 1 means the
// largest). The array is copied and sorted in descending order first,
// so the original order is left untouched.

int kthLargest(int arr[], int size, int k) {
    if (k < 1 || k > size) {
        return -1; // invalid k
    }

    int copy[100];
    for (int i = 0; i < size; i++) {
        copy[i] = arr[i];
    }

    // Sort the copy in descending order (selection sort).
    for (int i = 0; i < size - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (copy[j] > copy[maxIndex]) {
                maxIndex = j;
            }
        }
        int temp = copy[i];
        copy[i] = copy[maxIndex];
        copy[maxIndex] = temp;
    }

    return copy[k - 1];
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
    int arr[] = {7, 10, 4, 3, 20, 15};
    int size = 6;

    printArray(arr, size);
    printf("\n");

    int ks[] = {1, 2, 6, 7};
    for (int i = 0; i < 4; i++) {
        int result = kthLargest(arr, size, ks[i]);
        if (result == -1) {
            printf("k = %d -> invalid k (array has %d elements)\n",
                   ks[i], size);
        } else {
            printf("k = %d -> %d%s largest element is %d\n",
                   ks[i], ks[i], (ks[i] == 1) ? "st" : (ks[i] == 2) ? "nd"
                   : (ks[i] == 3) ? "rd" : "th", result);
        }
    }

    return 0;
}
