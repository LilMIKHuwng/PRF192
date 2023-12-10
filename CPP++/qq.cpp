#include<iostream>
#include<stdio.h>
void swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
void sapxep(int a[], int n){
	int i, j;
    for (i = 0; i <n-1; i++) {
        for (j = 0; j<n-i-1; j++){
            if (a[j] > a[j+1]) swap(&a[j], &a[j+1]);
        }
    }
}
int binarySearch(int a[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (a[mid] == x)
            return mid;

        if (a[mid] > x)
            { return binarySearch(a, left, mid - 1, x); }
		else{return binarySearch(a, mid + 1, right, x); }
    }

    return -1;
}
int main(){
    int n,i,j,t,x,left,right,mid,result; int a[n];
    printf("nhap n ");
    scanf("%d",&n);
    printf("nhap x ");
    scanf("%d",&x);
    for (i=1; i<=n; i++){
        printf("nhap a[%d]= ",i);
        scanf("%d", &a[i]);
    }
    sapxep(a,n);
    result = binarySearch(a, 1, n, x);
    if (result == -1) {
        printf("Không tìm thay so %d trong mang ", x);
    } else {
        printf("So %d duoc tim thay tai vi tri %d trong mang ", x, result);
    }
    printf("mang da sap xep la ");
    for (i=1; i<=n; i++){
    	printf("%3d", a[i]);
	}
    return 0;
}
