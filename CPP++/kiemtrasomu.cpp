#include<stdio.h>
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	int k=n;
	while (k>1){
		if (k%2==1) {printf("%d khong phai so mu cua 2",n);
		break;
		}
		k=k/2;
	}
	if (k==1) printf("%d la so mu cua 2",n);
	return 0;
}
