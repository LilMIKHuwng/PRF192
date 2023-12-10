#include<stdio.h>
const float pi=3.14;

void chuvi(float n){
	float c;
	c=(n*2)*pi;
	printf("Chu Vi hinh tron la %f",c);
}
void dientich(float n){
	float s;
	s=(n*n)*pi;
	printf("\nDien Tich hinh tron la %f",s);
}
int main(){
	float c,n,s;
	printf("nhap n ");
	scanf("%f",&n);
	chuvi(n); 
	dientich(n); 
	return 0;
}
