#include<stdio.h>
#include<stdlib.h>
void sapxep(int *a,int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;i--){
			if(a[j]<a[j-1]){
				int t=a[j];
				a[j]=a[j-1];
				a[j-1]=t;
			}
		}
	}
}

int main(){
	int a[]={5,7,2,8,9,1,3,4,6,0};
	int i;
	sapxep(a,10);
	for(i=0;i<10;i++){
		printf("%3d",a[i]);
	}
	return 0;
}
