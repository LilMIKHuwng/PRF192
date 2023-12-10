#include<stdio.h>

int main() {
	float a,b,C,S;
	printf("nhap chieu dai va chieu rong ");
	scanf("%f%f", &a, &b);
	C=(a+b)*2;
	S=a*b;
	printf("Chu vi HCN la %f\n",C);
	printf("Dien tich HCN la %f",S);
	return 0;
}
