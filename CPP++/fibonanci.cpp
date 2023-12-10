#include<stdio.h>
int main(){
	int n,i,a,b,c;
	printf("nhap n ");
	scanf("%d",&n);
	b=1;
	c=1;
	printf(" 1");
	for (i=1; i < n; i++) {
            printf("%4d",c);
			a = b;
            b = c;
            c = a + b;
        
        }
    return 0;
}
