#include<stdio.h>
int main(){
	int n,k,i,T;
	int a[10];
	printf("Nhap N:");
	scanf("%d",&n);
	for(i=10;i>=1;i--){
		a[i]=n%10;
		n=n/10;
	}
	k=10;
	for(i=1;i<=10;i++){
		a[i]=a[i]*k;
		k--;
	}
	T=0;
	for (i=1;i<=10;i++){
		T+=a[i];
	}
	if (T%11==0) {printf("valid");}
	else printf("notvalid");
	for (i=1;i<=10;i++){
		printf("%3d",a[i]);}
		return 0;
}
