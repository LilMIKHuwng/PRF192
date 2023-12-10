#include<stdio.h>
void nhapdiem(float *n){
	int rc; char c;
	printf("nhap diem: ");
	rc=scanf("%f%c",n,&c);
	if (rc==0){
		printf("khonhg chap nhan gia tri \n");	
	}
	else if (*n<0||*n>10){
		printf("nhap diem sai \n");
	}
}
void GPA(float n1,float n2,float n3,float n4, float *h){
	n1=(n1+n2+n3+n4)/4;
	*h=(n1/10)*4;
}
void xeploai(float n){
	if (n>=3.6){printf("Xuat sac \n");}
	else if (n>=3.2){printf("Gioi \n");}
	else if (n>=2.5){printf("Kha \n");}
	else if (n>=2){printf("Trung binh \n");}
	else printf("Yeu \n");
}
int main(){
	int choice; float n,n1,n2,n3,n4,h;
	do { printf("1- Nhap diem \n");
 		printf("2- Xem GPA \n");
 		printf("3- Xem thu hang \n");
 		printf("4- Quit \n");
 		printf("Select an operation: ");
 		scanf("%d", &choice);
 			switch(choice)
 				{ case 1: 
 					printf("CEA201 ");
 					nhapdiem(&n1);
 					printf("CSI104 ");
 					nhapdiem(&n2);
 					printf("MAE101 ");
 					nhapdiem(&n3);
 					printf("PRF192 ");
 					nhapdiem(&n4);
 					printf("diem 4 mon la %6.2f%6.2f%6.2f%6.2f  ",n1,n2,n3,n4);
 					//break;
 					case 2:
 					/* printf("CEA201 ");
 					nhapdiem(&n1);
 					printf("CSI104 ");
 					nhapdiem(&n2);
 					printf("MAE101 ");
 					nhapdiem(&n3);
 					printf("PRF192 ");
 					nhapdiem(&n4); */
 					GPA(n1,n2,n3,n4,&h);
 					printf("diem TB GPA 4 mon la %5.2f  ",h);
 					//break;
 					case 3:
 					/* printf("CEA201 ");
 					nhapdiem(&n1);
 					printf("CSI104 ");
 					nhapdiem(&n2);
 					printf("MAE101 ");
 					nhapdiem(&n3);
 					printf("PRF192 ");
 					nhapdiem(&n4);
 					GPA(n1,n2,n3,n4,&h); */
 					xeploai(h);
 					break;
 					case 4: break;
 					
}}
	while ( (choice!=1) && (choice!=2) && (choice!=3) && (choice!=4) );
}
