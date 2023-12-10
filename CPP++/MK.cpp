#include<stdio.h>
const int k=12345;
int main(){
	int n,i;
	i=0;
	do {
		printf("nhap mk ");
		scanf("%d",&n);
		if (n!=k) {i++;}
	}
	while (n!=k&&i<=2);
	if (i==3) {printf("mk sai");
	}
	else {printf("mk dung");
	}
	return 0;
}
