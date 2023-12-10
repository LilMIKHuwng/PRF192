#include<stdio.h>
#include<stdlib.h>
#define maxn 100
int menu(){
	printf("\nOne-Dimensional Array of Integers");
	printf("\n1- Add a value");
	printf("\n2- Search a value");
	printf("\n3- Remove the first existence of a value");
	printf("\n4- Remove all existences of a value");
	printf("\n5- Print out the array");
	printf("\n6- Print out the array in ascending order");
	printf("\n7- Print out the array in descending order");
	printf("\nOthers- Quit");
	printf("\nSelect:");
	short choice;
	scanf("%d",&choice);
	return choice;
}
int isFull(int *a, int n){
	return n==maxn;
}
int isEmpty(int *a, int n){
	return n==0;
}
void add(int value, int *a, int *pn){
	a[*pn]=value;
	*pn++;
}
int search(int x,int *a,int n){
	int i;
	for (i=0;i<n;i++){
		return i;
	}
	return -1;
}
int removeone(int pos,int*a,int *pn){
	if (pos<0||pos>=*pn) return 0;
	int i;
	for (i=pos;i<=*pn-1;i++) a[i]=a[i+1];
	(*pn)--;
	return 1;
}
int removeall(int x,int*a,int*pn){
	int result=0;
	int i,j;
	for (i=(*pn)-1;i>=0;i--){
		if (a[i]==x){
			result =1;
			for (j=i;j<(*pn)-1;j++) a[j]=a[j+1];
			(*pn)--;
		}
	}
	return result;
}
void printAsc(int*a, int n){
	int ** adds = (int**)calloc(n,sizeof(int*));
	int i,j;
	for(i=0;i<n-1;i++) adds[i]=&a[i];
	int *t;
	for (i=0;i<n-1;i++)
	for (j=n-1;j>i;j--)
		if (*adds[j]<*adds[j-1]){
			t=adds[j];
			adds[j]=adds[j-1];
			adds[j-1]=t;
		}
	for (i=0;i<n;i++) printf("%3d",*adds[i]);
	free(adds);	
}
void printDesc(int *a, int n){
	int ** adds = (int**)calloc(n,sizeof(int*));
	int i,j;
	for(i=0;i<n-1;i++) adds[i]=&a[i];
	int *t;
	for (i=0;i<n-1;i++)
	for (j=n-1;j>i;j--)
		if (*adds[j]>*adds[j-1]){
			t=adds[j];
			adds[j]=adds[j-1];
			adds[j-1]=t;
		}
	for (i=0;i<n;i++) printf("%3d",*adds[i]);
	free(adds);	
}
void print(int*a,int n){
	int i;
	for (i=0;i<n;i++) printf("%3d",a[i]);
}
int main(){
	int a[maxn];
	int n=0;
	int value;
	int userChoice;
	do{
		userChoice=menu();
		switch(userChoice)
		{	case 1:
			if (isFull(a,n)) printf("\nSorry! The array is full.\n");
			else {
				printf("Input an added value:");
				scanf("%d",&value);
				add(value,a,&n);
				printf("Added\n");
			}
			break;
			case 2:
				if(isEmpty(a,n)) printf("\nSorry! The array is empty.\n");
				else {
					printf("Input the searched value:");
					scanf("%d",&value);
					int pos=search(value,a,n);
					if (pos<0) printf("Not found!\n");
					else printf("Postion is found:%d\n",pos);
				}
			break;
			case 3:
				if (isEmpty(a,n)) printf("\nSorry! The array is empty.\n");
				else {
					printf("Input the removed value:\n");
					scanf("%d",&value);
					int pos = search(value,a,n);
					if (pos<0) printf("Not found:\n");
					else {
						removeone(pos,a,&n);
						printf("Removed!\n");
					}
				}
			break;
			case 4:
				if (isEmpty(a,n)) printf("\nSorry! The array is empty.\n");
				else {
					printf("Input a value that will be remove all:");
					scanf("%d",&value);
					if (removeall(value,a,&n)==0) printf("Not found:\n");
					else printf("Removed!\n");
				}
			break;
			case 5:
				print(a,n);
				break;
			case 6:
				printAsc(a,n);
				break;
			case 7:
				printDesc(a,n);
				break;
			default: printf("\nGoodbye.\n");
		}
	}
	while (userChoice>0 && userChoice<8);
	return 0;
}
