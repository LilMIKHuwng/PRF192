#include <stdio.h>

int main() {
    int n, m, i, j, k;
    printf("Nh?p chi?u cao c?a hình trái tim: ");
    scanf("%d", &n);
    m = n;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf(" ");
        }
        for (k = 0; k <= 2*i; k++) {
            printf("*");
        }
        //m--;
        printf("\n");
    }
    /*m = 0;
    for (i = n; i > 0; i--) {
        for (j = 0; j < m; j++) {
            printf(" ");
        }
        for (k = 0; k < 2*i-1; k++) {
            printf("*");
        }
        m++;
        printf("\n");
    }*/
    return 0;
}

