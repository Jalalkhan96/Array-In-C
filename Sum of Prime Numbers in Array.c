#include <stdio.h>

// Find the sum of all prime numbers in an array, e.g. {2, 3, 4, 5, 6, 7, 11}
// has prime sum 2 + 3 + 5 + 7 + 11 = 28. Numbers below 2 are not prime.

int isPrime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int sumOfPrimes(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (isPrime(arr[i]))
        {
            sum += arr[i];
        }
    }
    return sum;
}

int main()
{
    int arr1[] = {2, 3, 4, 5, 6, 7, 11};
    int arr2[] = {4, 6, 8};
    int arr3[] = {1, 0, -3, 13};

    printf("Sum of primes in {2, 3, 4, 5, 6, 7, 11}: %d\n", sumOfPrimes(arr1, 7));
    printf("Sum of primes in {4, 6, 8}: %d\n", sumOfPrimes(arr2, 3));
    printf("Sum of primes in {1, 0, -3, 13}: %d\n", sumOfPrimes(arr3, 4));

    return 0;
}
