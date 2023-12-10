#include<stdio.h>
void UC(int n){
	int i;
	for (i=1;i<=n;i++){
		if (n%i==0){printf("%3d",i);}
	}
}
void tb(int a, int b, int c){
	float k; k=(a+b+c)/3;
	printf("\ngia tri tb %f",k);
}
int input(){
	int n;
	printf("\nnhap n ");
	scanf("%d",&n);
	return n;
}
int main(){
	int a,b,c,i,k,n;
	a=input();
	UC(a);
	b=input();
	UC(b);
	c=input();
	UC(c);
	tb(a,b,c);
	return 0;
}
