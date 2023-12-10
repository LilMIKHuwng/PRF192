#include<iostream>

int main(){
    int a[10];
    int sum = 0;
    for (int i=0; i<10; i++){
        printf("nhap gia tri a[%d]= ",i);
        scanf("%d", &a[i]);
    }
    for (int i=0; i<10; i++){
        sum += a[i];
    }
    printf("tong la %d", sum);
    return 0;
}