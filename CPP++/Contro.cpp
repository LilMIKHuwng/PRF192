#include<stdio.h>
/* void input(int *num){
	printf("nhap n ");
	scanf("%d",num);
}
void inputmast(int num){
	printf("\nnhap m ");
	scanf("%d", &num);
}
int main(){
	int n,m;
	
	input(&n);
	printf("n= %d",n);
	
	inputmast(m);
	printf("m= %d", m);
*/
void div(int a, int b, int *q, int *r){
	*q=a/b;
	*r=a%b;
}
int main(){
	int a=76, b=10;
	int q,r;
	div(a,b,&q,&r);
	printf("%3d%3d",q,r);
	return 0;
}

