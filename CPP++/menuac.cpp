#include<stdio.h>
#include<math.h>
int menu(){
 int a;
 printf("\n1.nhap cac phan tu cua ma tran: ");
 printf("\n2.hien thi ma tran vua nhap: ");
 printf("\n3.sap xep tang tren tung hang cua ma tran: ");
 printf("\nNhap mot so tuong ung voi chuc nang muon thuc hien (1-3)hoac mot so khac de thoat: ");
 scanf("%d",&a);
 return a;
}
void nhap(int a[100][100],int *sh, int *sc){
 int x,y;
 do{
     printf("\nnhap so hang va so cot: ");
     scanf("%d%d", sh, sc);
 }while(*sh>5 || *sh<0 || *sc<2 );    //hang <=5; cot>=2
 for(x=0; x<*sh; x++){
     for(y=0; y<*sc; y++){
     printf("\nnhap a[%d][%d]=",x,y);
     scanf("%d",&a[x][y]);
        }
    }
}
void hien(int a[100][100],int sh,int sc){
 int x,y;
 for(x=0;x<sh;x++){     
     for(y=0;y<sc;y++){
         printf("%d\t",a[x][y]);    //chi so hang truoc so cot
     }
     printf("\n");
 }
}
void sapxeptang(int a[100][100],int sh, int sc){
 int i,j;
 int k = sh*sc;
 for(i=0; i<k-1; i++){
 for(j=i+1; j<k; j++){
 if(a[i/sc][i%sc] >a[j/sc][j%sc]){
     int tam = a[i/sc][i%sc];
     a[i/sc][i%sc] = a[j/sc][j%sc];
     a[j/sc][j%sc] = tam ;
 }
 } 
}
}
int main(){
 int chon, a[100][100],sh,sc;
 do{
 chon=menu();
 switch(chon){
 case 1: nhap(a,&sh,&sc);
     break;
 case 2: hien(a,sh,sc);
     break;
 case 3: sapxeptang(a,sh,sc);
         break;
 }
 }while(chon>=1 && chon <=3);
} 
