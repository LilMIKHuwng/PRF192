#include <stdio.h>
#include <ctime>
#include <cstdlib>
using namespace std;
void bai1(){

}
void bai2(){

}
void bai3(){

}
void bai4(){
    int n;
    printf("\nnhap do dai cua chuoi ngau nhien can tao: ");
    scanf("%d", &n);
    printf("\nchuoi ngau nhien do dai %d la: ", n);
    for (int i = 1; i <= n; i++){
        int r = rand() % 26;
        // 
        printf("%c ", char(r + 'a'));
    }
    printf("\n");

}
void menu(){
    int choice;
    printf("\n1- Bai 1\n2- Bai 2\n3- Bai 3\n4- Bai 4\n5- Quit\nSelect an operation: "); 
 		scanf("%d", &choice);
    if (choice == 1) bai1();
    if (choice == 2) bai2();
    if (choice == 3) bai3();
    if (choice == 4) bai4();
    if (choice == 5) return;

}
int main(){
    srand(time(NULL));
    menu();
}
