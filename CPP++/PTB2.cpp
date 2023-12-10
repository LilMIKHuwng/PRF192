#include <stdio.h>
#include<iostream>
#include <math.h>

int main() 
{
	float a , b ,c, denta,x1, x2,x;
	
	printf("Nhap a b va c:");
	scanf("%f%f%f",&a,&b,&c);
	
	if(a==0&&b==0&&c==0){
		printf("phuong trinh co vo so nghiem");
	}
	else{
		if(a==0){
			x=-c/b;
			printf("day la phuong trinh bac nhat co nghiem x la %.3f", x);
		
}
	else{
	
	printf("phuong trinh cua ban la: %.2fx^2", a);
	printf("+%.2fx",b );
	printf("+%.2f=0\n", c);
	
	denta= pow(b,2)-(4*a*c);
	
	printf("denta bang %f\n", denta);
	if(denta>0){
		printf("phuong trinh co 2 nghiem phan biet\n");
		x1=(-b-sqrt(denta))/(2*a);
		x2=(-b+sqrt(denta))/(2*a);	
		printf("nghiem cua phuong trinh la; x1=%.3f, x2=%.3f", x1 , x2);
	}
	else{
		if(denta<0){
		
		printf("phuong trinh vo nghiem \n");
	}
	else{
		printf("phunog trinh co mot nghiem kep\n");
		x=(-b)/(2*a);
		printf("nghiem x la %.3f", x);
	}}}}
	return 0;
}
