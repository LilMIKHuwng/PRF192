#include<stdio.h>
int main(){
	int n,i;
	printf("nhap n ");
	scanf("%d",&n);
	for ( i=1; i<=10; i++)
	{	printf("%dx%2d=%2d\n", n, i, n*i);	}
	return 0;
}
