#include<iostream>
void swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
void sapxep(int a[], int n){
	int i, j, min, t;
    for (i = 1; i <=n-1; i++) {
        min = i;
        for (j = i+1; j<=n; j++){
            if (a[j] < a[min]) min = j;
        }
        swap(&a[i], &a[min]);
    }
}
int main(){
    int n,i,j,t,min; int a[n];
    printf("nhap n ");
    scanf("%d",&n);
    for (i=1; i<=n; i++){
        printf("nhap a[%d]= ",i);
        scanf("%d", &a[i]);
    }
    sapxep(a,n);
    printf("mang da sap xep la ");
    for (i=1; i<=n; i++){
    	printf("%3d", a[i]);
	}
    return 0;
}
