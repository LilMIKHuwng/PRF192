#include<stdio.h>
const float pi = 3.14;
int main() {
    int r;
    float C, S;
    
    printf("Nhap ban kinh r:");
    scanf("%d", &r);
    
    C=r*2*pi;
    S=r*r*pi;
    
    printf("Chu vi hinh tron la %f\n", C);
    printf("Dien tich hinh tron la: %f", S);
}
