#include <stdio.h>
#include <ctime>
#include <cstdlib>
#include <string.h>
#include <math.h>
#include <stdbool.h>
using namespace std;

// Bai 1
float tinh_dien_tich(float a, float b, float c) {
    float p = (a + b + c) / 2;
    float S = sqrt(p * (p - a) * (p - b) * (p - c));
    return S;
}
void bai1(){
	float a, b, c, S;
	printf("Nhap do dai 3 canh cua tam giac: ");
    scanf("%f %f %f", &a, &b, &c);
	S = tinh_dien_tich(a, b, c);
    printf("Dien tich tam giac la: %0.2f", S);
}

// Bai 2
bool isPerfectSquare(int n) {
    int sqrt_n = sqrt(n);
    return sqrt_n * sqrt_n == n;
}

bool isSumOfTwoPerfectSquares(int n) {
    for (int i = 1; i <= sqrt(n / 2); i++) {
        if (isPerfectSquare(n - i * i)) {
            return true;
        }
    }
    return false;
}
void bai2(){
	int n;
	printf("Enter a number: ");
    scanf("%d", &n);
	if (isSumOfTwoPerfectSquares(n)) {
    	printf("%d is the sum of two perfect squares.\n", n);
    	} else {
        	printf("%d is not the sum of two perfect squares.\n", n);
    		}
}

// Bai 3
int isPrime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int largestPrime(int* arr, int size) {
    int maxPrime = -1;
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i]) && arr[i] > maxPrime) {
            maxPrime = arr[i];
        }
    }
    return maxPrime;
}
void bai3(){
	int size;
	printf("Enter the size of the array: ");
    scanf("%d", &size);

    int *arr = (int*)calloc(size,sizeof(int));

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    	}

    int maxPrime = largestPrime(arr, size);

    if (maxPrime == -1) {
       	printf("There are no prime numbers in the array.");
    	} else {
        printf("The largest prime number in the array is %d.", maxPrime);
    	}
}
// Bai 4
void bai4(){
    int n;
    printf("\nnhap do dai cua chuoi ngau nhien can tao: ");
    scanf("%d", &n);
    printf("\nchuoi ngau nhien do dai %d la: ", n);
    char random_string[27] = {0};
    for (int i = 1; i <= n; i++){
    	int r;
        do {
            r = rand() % 26;
        } while (random_string[r] != 0); 
        random_string[r] = 'a' + r;
        printf("%c ", random_string[r]);
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
