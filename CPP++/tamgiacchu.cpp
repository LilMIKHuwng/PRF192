#include <stdio.h>

// H�m t�nh gi� tr? c?a tam gi�c Pascal
char pascal(char a, char b) {
    return a + b;
}

// H�m in tam gi�c Pascal
void printPascal(int n) {
    char pascalArray[n][n];
    int i, j, k;

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                pascalArray[i][j] = '1';
            } else {
                pascalArray[i][j] = pascal(pascalArray[i-1][j-1], pascalArray[i-1][j]);
            }
        }
    }

    // In tam gi�c Pascal
    for (i = 0; i < n; i++) {
        // In kho?ng tr?ng tru?c khi in gi� tr? c?a tam gi�c Pascal
        for (k = 0; k < n - i - 1; k++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%c ", pascalArray[i][j]);
        }
        printf("\n");
    }
}

// H�m main d? th?c thi chuong tr�nh
int main() {
    int n;

    printf("Nhap so hang cua tam giac Pascal: ");
    scanf("%d", &n);

    printf("Tam giac Pascal:\n");
    printPascal(n);

    return 0;
}

