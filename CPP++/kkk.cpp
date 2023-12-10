#include<stdio.h>
#include<math.h>
int main(){
	int n1,n2,S; 
	
	printf("nhap 2 so n1,n2 ");
	scanf("%d%d",&n1,&n2);
	
	for(;n1<=n2;)
	{	if (n1%2==0) {n1=n1+1;}
	S+=n1;
	n1+=2;
	}
	
	printf("tong le %d",S);
	return 0;
	}
	
	
