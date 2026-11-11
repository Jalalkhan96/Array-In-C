#include <stdio.h>

// Insert an element at a given 1-based position in an array, shifting
// the elements after it one place to the right, e.g. inserting 3 at
// position 3 in {1, 2, 4, 5} gives {1, 2, 3, 4, 5}. The array must
// have room (capacity > size); an out-of-range position is rejected.
// Returns the new size, or -1 on failure.

int insertAt(int arr[], int size, int capacity, int value, int position)
{
    int i;

    if (position < 1 || position > size + 1)
    {
        printf("Error: position %d is out of range (1 to %d)\n", position, size + 1);
        return -1;
    }
    if (size >= capacity)
    {
        printf("Error: array is full, cannot insert %d\n", value);
        return -1;
    }

    for (i = size; i >= position; i--)
        arr[i] = arr[i - 1];
    arr[position - 1] = value;
    return size + 1;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr1[10] = {1, 2, 4, 5};
    int arr2[10] = {1, 2, 4, 5};
    int size;

    size = insertAt(arr1, 4, 10, 3, 3);
    printf("Insert 3 at position 3: ");
    printArray(arr1, size);

    size = insertAt(arr2, 4, 10, 0, 1);
    printf("Insert 0 at position 1: ");
    printArray(arr2, size);

    insertAt(arr1, size, 10, 9, 99);

    return 0;
}
