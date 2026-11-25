#include <stdio.h>

// Count Prime Numbers in Array.c
// Counts how many elements of an integer array are prime numbers.
// A prime number is greater than 1 and divisible only by 1 and itself.

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    if (num == 2) {
        return 1;
    }
    if (num % 2 == 0) {
        return 0;
    }
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int countPrimes(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    return count;
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
    int arr1[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int arr2[] = {4, 6, 8, 9, 10};
    int arr3[] = {1, 0, -3, 13, 17};

    printArray(arr1, 10);
    printf(" -> %d prime numbers\n", countPrimes(arr1, 10));

    printArray(arr2, 5);
    printf(" -> %d prime numbers\n", countPrimes(arr2, 5));

    printArray(arr3, 5);
    printf(" -> %d prime numbers\n", countPrimes(arr3, 5));

    return 0;
}
