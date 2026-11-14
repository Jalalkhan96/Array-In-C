#include <stdio.h>

// Find the element that appears exactly once in an array where every
// other element appears twice, using XOR: a ^ a = 0 and a ^ 0 = a, so
// all the pairs cancel out and only the single element is left, e.g.
// {2, 3, 5, 4, 5, 3, 4} -> 2, {1, 1, 2, 2, 3} -> 3

int main()
{
    int arr1[] = {2, 3, 5, 4, 5, 3, 4};
    int arr2[] = {1, 1, 2, 2, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int once1 = 0, once2 = 0;
    int i;

    for (i = 0; i < size1; i++)
        once1 ^= arr1[i];

    for (i = 0; i < size2; i++)
        once2 ^= arr2[i];

    printf("Element appearing once in {2, 3, 5, 4, 5, 3, 4}: %d\n", once1);
    printf("Element appearing once in {1, 1, 2, 2, 3}: %d\n", once2);

    return 0;
}
