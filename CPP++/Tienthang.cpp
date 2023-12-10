#include<stdio.h>
const int pa=9000000, pd=3600000;

int main(){
	int n, tf, in, ti, it;
	
	printf("Nhap luong 1 nam:");
	scanf("%d",&in);
	
	printf("So nguoi phu thuoc: ");
	scanf("%d",&n);
	
	tf=12*(pa + n*pd);
	
	ti=in-tf;
	
	if(ti<=0){
		it=0;
		ti=0;
	} else {
		if(ti<=5000000){
			it=ti*0.05;
		}
		else if(ti<=10000000){
			it=ti*0.1;
		}
		else if(ti<=18000000){
			it=ti*0.15;
		} 
		else {
			it=ti*0.2;
		}
	}
	printf("Tax-free income: %d\n",tf);
		printf("Taxable income: %d\n",ti);
			printf("Income tax: %d\n",it);
	
	
	return 0;
}
