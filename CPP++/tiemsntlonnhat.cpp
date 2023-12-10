#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int largestPrime(int* arr, int size) {
    int maxPrime = -1;
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i]) && arr[i] > maxPrime) {
            maxPrime = arr[i];
        }
    }
    return maxPrime;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int* arr = (int*)calloc(size,sizeof(int));

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int maxPrime = largestPrime(arr, size);

    if (maxPrime == -1) {
        printf("There are no prime numbers in the array.");
    } else {
        printf("The largest prime number in the array is %d.", maxPrime);
    }

    free(arr);

    return 0;
}

