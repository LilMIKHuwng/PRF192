#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int *a;
	printf("nhap n ");
		scanf("%d",&n);
	//a=(int*) calloc(n,sizeof(int));
	for (int i=0; i<n;i++){
		printf("nhap a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("mang cua ban la ");
	for (int i=0;i<n;i++){
		printf("%5d",a[i]);
	}
	/*float TB=0;
	for (int i=0;i<5;i++){
		TB=TB+a[i];
	}
	TB=TB/5;
	printf("\ngia tri tb la %.3f",TB);*/
	return 0;
}
