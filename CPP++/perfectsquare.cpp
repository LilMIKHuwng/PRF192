#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPerfectSquare(int n) {
    int sqrt_n = sqrt(n);
    return sqrt_n * sqrt_n == n;
}

bool isSumOfTwoPerfectSquares(int n) {
    for (int i = 1; i <= sqrt(n / 2); i++) {
        if (isPerfectSquare(n - i * i)) {
            return true;
        }
    }
    return false;
}


int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isSumOfTwoPerfectSquares(n)) {
        printf("%d is the sum of two perfect squares.\n", n);
    } else {
        printf("%d is not the sum of two perfect squares.\n", n);
    }

    return 0;
}

