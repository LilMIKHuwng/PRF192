#include<stdio.h>
#include<math.h>
int main(){
	int n;
	
	//i=(n%2==1)?1:2;
	do{
		printf("nhap tuoi ");
		scanf("%d",&n);
	}
	while (n<22);
	printf("du tuoi lam viec%d", n);
	return 0;
}
