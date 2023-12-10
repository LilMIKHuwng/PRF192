#include<stdio.h>
void dequy(int n,char c1,char c2,char c3){
	if(n==1){
		printf("Di chuyen dia %d tu coc %c sang coc %c\n",n,c1,c3);
		return;
	}
	dequy(n-1,c1,c3,c2);
	printf("Di chuyen dia %d tu coc %c sang coc %c\n",n,c1,c3);
	dequy(n-1,c2,c1,c3);
}
int main(){
	int n;
	printf("nhap n:");
	scanf("%d",&n);
	dequy(n,'A','B','C');
	return 0;
}
