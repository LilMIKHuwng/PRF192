#include <stdio.h>
#include <math.h>

float tinh_dien_tich(float a, float b, float c) {
    float p = (a + b + c) / 2;
    float S = sqrt(p * (p - a) * (p - b) * (p - c));
    return S;
}

int main() {
    float a, b, c, S;
    printf("Nhap do dai 3 canh cua tam giac: ");
    scanf("%f %f %f", &a, &b, &c);
    S = tinh_dien_tich(a, b, c);
    printf("Dien tich tam giac la: %0.2f", S);
    getchar();
    return 0;
}
