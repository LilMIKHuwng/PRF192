#include<stdio.h>
int main(){
	int n,i;
	printf("nhap n ");
	scanf("%d",&n);
	i=1;
	while (i<=n) {
		printf("%3d",i);
		i+=(i-1);
	}
	return 0;
}
