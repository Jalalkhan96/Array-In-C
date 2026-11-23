#include <stdio.h>

// Find the product of all elements in an array, e.g.
// {1, 2, 3, 4} -> 24, {2, -3, 4} -> -24, {5, 0, 7} -> 0.
// A long long is used so larger products do not overflow an int.

long long productOfElements(int arr[], int size)
{
    long long product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    return product;
}

int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {2, -3, 4};
    int arr3[] = {5, 0, 7};
    int arr4[] = {1, 2, 3, 4, 5};

    printf("Product of {1, 2, 3, 4}: %lld\n", productOfElements(arr1, 4));
    printf("Product of {2, -3, 4}: %lld\n", productOfElements(arr2, 3));
    printf("Product of {5, 0, 7}: %lld\n", productOfElements(arr3, 3));
    printf("Product of {1, 2, 3, 4, 5}: %lld\n", productOfElements(arr4, 5));

    return 0;
}
