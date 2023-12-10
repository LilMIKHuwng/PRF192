#include<stdio.h>
#include<stdlib.h>

void kiemtra(int n){
	for (int i=2; i<=n ;i++){
		if (n%i==0) {printf("%d khong phai la so NT\n",n); break;
		} else {printf("%d la so NT\n",n); break;}
	}
}
void sont(int a[], int n){
	for (int i=0;i<n;i++){
		kiemtra(a[i]);
	}
}
int main(){
	int n;
	printf("nhap n ");
	scanf("%d",&n);
	int *a=(int*) calloc(n,sizeof(int));
	for (int i=0; i<n; i++){
        printf("nhap a[%d]= ",i);
        scanf("%d", &a[i]);
    }
    sont(a,n);
    return 0;
}
