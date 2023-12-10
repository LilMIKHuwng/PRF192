#include<stdio.h>
int main(){
	float a,b,c,max;
	printf("nhap a,b,c: ");
	scanf("%f%f%f",&a,&b,&c);
	max=a;
	if(max<b){
		max=b;
	} else if(max<c){
		max=c;
	}
	printf("so lon nhat la: %f", max);
	return 0;
}
