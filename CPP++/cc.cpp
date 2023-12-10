#include<stdio.h>
void Tong(int a,int b){
	float k;
	k=a+b;
	printf("Tong la %f", k);
}
void Hieu(int a,int b){
	float k;
	k=a-b;
	printf("Hieu la %f", k);
}
void Tich(int a,int b){
	float k;
	k=a*b;
	printf("Tich la %f", k);
}
void Thuong(int a,int b){
	float k;
	k=a/b;
	printf("Thuong la %f", k);
}
int main(){
	int a,b; float k; char op;
	printf("nhap phep tinh a,b ");
	scanf("%d%c%d",&a,&op,&b);
switch (op)
 { case'+' : Tong(a,b);
 break;
 case'-' : Hieu(a,b);
 break;
 case'*' : Tich(a,b);
 break;
 case'/' : if ( b==0){
 	printf("khong chia duoc");
	break;
 }
 else
 { Thuong(a,b);
 }
}
	return 0;
}
