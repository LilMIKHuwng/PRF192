#include<stdio.h>

int main(){
	int l;
	char s;
	printf("nhap luong: ");
	scanf("%d", &l);
	fflush(stdin);
	printf("nhap thu hang: ");
	scanf("%c", &s);
	if (s=='A'){
		l=l+300;
	}else
	if (s=='B'){
		l=l+200;
	}else if (s=='C'){
		l=l+100;
	}
	printf("Tong luong la: %d",l);
	return 0;
}
