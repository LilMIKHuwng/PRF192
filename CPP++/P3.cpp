#include<stdio.h>
#include<math.h>

void fibonanci(int n){
	int i,a,b,c;
	b=1;
	c=1;
	printf(" 1");
	for (i=1; i < n; i++) {
            printf("%4d",c);
			a = b;
            b = c;
            c = a + b;
         }
}
void Date( int d, int m, int y) {
 	int k;
	if ( d<1 || d>31 || m<1 || m>12) { k=0;}
	
	if ( m==1 || m==3 || m==3 || m==7 || m==8 || m==10 || m==12 &&  d<=31 )  { k=1; } else { k=0; }
	
	if ( m==4 || m==6 || m==9 || m==11 &&  d<=30 )  { k=1; } else { k=0; }
	
	if (m==2) { if ( y%4==0  &&  d<=29 )  { k=1; } else { k=0; }}
	else { if ( y%4!=0  &&  d<=28 )  { k=1; } else { k=0; } }
	if (k==1) { printf("\nnhap dung "); } else { printf("\nnhap sai ");	}
}

int main(){
	int choice,n,d,m,y,k;
	do { printf("1- fibonanci\n");
 		printf("2- validDate\n");
 		printf("3- Quit\n");
 		printf("Select an operation: ");
 		scanf("%d", &choice);
 		switch(choice)
 			{ case 1: 
 				printf("nhap n ");
				scanf("%d",&n);
				fibonanci(n);
				break;
			  case 2:
			  	printf("nhap ngay thang nam ");
				scanf("%d%d%d",&d,&m,&y);
				Date(d,m,y);
				break;
			  case 3:
			  	break;
			  	}}
 	while ( (choice!=1) && (choice!=2) && (choice!=3) );
}
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
 		
