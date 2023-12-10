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
    int i, j;

    for (i = 0; i < n; i++) {
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

    printf("Tam giac Pascal:\n");
    printPascal(n);
    
    

    return 0;
}

