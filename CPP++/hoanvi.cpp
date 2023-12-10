#include<stdio.h>
void swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
	//printf("hoan vi la %2d%2d",a,b);
}
int main(){
	int a,b,t;
	printf("nhap a,b ");
	scanf("%d%d", &a,&b);
	swap(&a,&b);
	printf("hoan vi la %2d%2d",a,b);
	return 0;
}
