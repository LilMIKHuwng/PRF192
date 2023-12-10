#include<stdio.h>

int main(){
	int thang, nam;
	printf("nhap thang ");
	scanf("%d",&thang);
	switch(thang){
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
		printf("thang nay co 31 ngay");
		break;
		
		case 4:case 6:case 9:case 11:
		printf("thang nay co 30 ngay");
		break;
		
		case 2:
		printf("nhap nam ");
		scanf("%d",&nam);
		if (nam%4==0){
			printf("thang nay co 29 ngay");}
			
			else {
			printf("thang nay co 28 ngay");
		}
	}
	return 0;
}
