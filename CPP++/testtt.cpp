#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
    int squareRoot = sqrt(num);
    if (squareRoot * squareRoot == num) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfectSquare(num)) {
        printf("%d is a perfect square.", num);
    } else {
        printf("%d is not a perfect square.", num);
    }

    return 0;
}







