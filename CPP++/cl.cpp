#include<stdio.h>
int main(){
	int a[5][5];
	for (int i=1; i<6; i++){
		printf("nam thu %d \n",i);
		for (int j=1; j<6; j++){
			scanf("%d",&a[i][j]);
	}
}
	for (int i=1; i<6; i++)
	for (int j=1; j<6; j++)
	printf("%d",a[i][j]);
	return 0;
}
