#include<stdio.h>
#include<math.h>

void prime(int n){
	int i;
	for (i=2;i<=n/2;i++){
		if (n%i==0){ printf("khong phai la so NT \n"); break;
		} else {printf("la so NT\n"); break;
		}
	}
}
void MinMax(int n){
	int d,max,min;
	d=n%10;
	n=n/10;
	max=min=d;
	while (n>0){
		d=n%10;
		n=n/10;
		if (d<min) min=d;
		if (d>max) max=d;
		}
	printf("chu so nho nhat la %d\n", min);
	printf("chu so lon nhat la %d\n", max);
}
int main(){
	int choice,n;
	do { printf("1- Process primes\n");
 		printf("2- Print min, max digit in an integer \n");
 		printf("3- Quit\n");
 		printf("Select an operation: ");
 		scanf("%d", &choice);
 			switch(choice)
 				{ case 1: do
 				{ printf("nhap n ");
 					scanf("%d",&n);
 				}
 				while(n<0);
 				prime(n);
 				break;
 					case 2: printf("nhap n ");
 							scanf("%d",&n);
 						MinMax(n) ;
 						break;
 							case 3: break;
 }
 }
 while ( (choice!=1) && (choice!=2) && (choice!=3) );
}
