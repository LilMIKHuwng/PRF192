#include<stdio.h>
#include<string.h>
#include<conio.h>
void nhap(char name[][31],int n){
	int i;
	for(i=0;i<n;i++){
		printf("Nhap ten thu %d/%d",i+1,n);
		fflush(stdin);
		scanf("%30[^\n]",name[i]);
		strupr(name[i]);
	}
} 
void xuat(char name[][31],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d.%s\n",i,name[i]);
	}
}
void sapxep(char name[][31],int n){
	int i,j;
	char t[31];
	for(i=0;i<n-1;i++)
		for(j=n-1;j>i;j--)
			if(strcmp(name[j],name[j-1])<0)
			{
				strcpy(t,name[j]);
				strcpy(name[j],name[j-1]);
				strcpy(name[j-1],t);
			}
}

int main(){
	char name[10][31];
	int n=10;
	nhap(name, n);
	xuat(name, n);
	sapxep(name, n);
	printf("DS sau khi sap xep:\n");
	xuat(name, n);
	getch();
	return 0;
}

