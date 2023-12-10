#include<iostream>
void swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
}
void sapxep(int a[], int n){
	int i, j, min;
    for (i = 1; i <=n-1; i++) {
        min = i;
        for (j = i+1; j<=n; j++){
            if (a[j] < a[min]) min = j;
        }
        swap(&a[i], &a[min]);
    }
}
void timkiem(int a[], int n, int m, int *check){
    int k,i=1; 
    while (n>0){
        k=(n+i)/2;
        if (a[k]==m) {*check =1; break;}
        else if (a[k]>m) {i=k+1;}
        else if (a[k]<m) {n=k-1;}
        else {*check =0; break;}
    }
}
int main(){
    int n,i,j,t,min,m,check; int a[n];
    printf("nhap n ");
    scanf("%d",&n);
    printf("nhap m ");
    scanf("%d",&m);
    for (i=1; i<=n; i++){
        printf("nhap a[%d]= ",i);
        scanf("%d", &a[i]);
    }
    sapxep(a,n);
    timkiem(a,n,m,&check);
    if (check=1) {printf("tim thay gia tri %d trong mang",m);} 
    else {printf("khong tim thay gia tri %d trong mang",m);}
    printf("mang da sap xep la ");
    for (i=1; i<=n; i++){
    	printf("%3d", a[i]);
	}
    return 0;
}