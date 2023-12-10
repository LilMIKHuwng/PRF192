#include <stdio.h>

// H�m t�nh gi� tr? c?a tam gi�c Pascal
int pascal(int row, int col) {
    if (col == 0 || col == row) {
        return 1;
    } else {
        return pascal(row - 1, col - 1) + pascal(row - 1, col);
    }
}

// H�m in tam gi�c Pascal
void printPascal(int n) {
    int i, j, k;

    for (i = 0; i < n; i++) {
        // In kho?ng tr?ng tru?c khi in gi� tr? c?a tam gi�c Pascal
        for (k = 0; k < n - i - 1; k++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%d ", pascal(i, j));
        }
        printf("\n");
    }
}

// H�m main d? th?c thi chuong tr�nh
int main() {
    int n;

    printf("Nhap so hang cua tam giac Pascal: ");
    scanf("%d", &n);

    printf("Tam giac Pascal can:\n");
    printPascal(n);

    return 0;
}

