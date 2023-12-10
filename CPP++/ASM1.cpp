#include <stdio.h>

int main() {
    int num1, num2, hieu;
    
    printf("Nhap so thu 1: ");
    scanf("%d", &num1);
    
    printf("Nhap so thu 2: ");
    scanf("%d", &num2);
    
    if (num1>num2) {hieu = num1 - num2;}
    if (num1<num2) {hieu = num2 - num1;}
    
    if(hieu == num1) {
        printf("Difference is equal to value %d", num1);
    } else if (hieu == num2) {
        printf("Difference is equal to value %d", num2);
    } else {
        printf("Difference is not equal to any of the values entered");
    }
    
    return 0;
}

