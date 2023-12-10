#include<stdio.h>
#include<stdlib.h>
#define maxn 100
void input(int*a,int n){
	int i;
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
int max(int*a,int n){
	int max;
	for (int i=1;i<n;i++){
		if (max<a[i]) max=a[i];
	}
	return max;
}
void output(int*a,int n){
	for (int i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
}
void sochan(int*a,int n){
	for (int i=0;i<n;i++){
		if (a[i]%2==0) printf("%d  ",a[i]);
	}
}
int main(){

	int a[maxn];
	int n;
	int maxval;
	do {
		printf("nhap so luong phan tu trong mang ");
		scanf("%d",&n);
}
	while (n<1 || n>maxn);
	printf("nhap %d phan tu vao trong mang ",n);
	input(a,n);
	maxval=max(a,n);
	printf("\nso lon nhat trong mang la %d\n",maxval);
	output(a,n);
	printf("\ncac so chan trong mang la ");
	sochan(a,n);
	return 0;		
}
