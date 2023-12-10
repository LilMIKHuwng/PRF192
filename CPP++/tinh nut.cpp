#include<stdio.h>
#include<math.h>

int main(){
	int n,k;
	printf("nhap n: ");
	scanf("%d", &n);
	k=n/1000;
	n=n%1000;
	k=k+(n/100);
	n=n%100;
	k=k+(n/10);
	n=n%10;
	k=k+n;
	k=k%10;
	printf("so nut la %d", k);
	return 0;
}
