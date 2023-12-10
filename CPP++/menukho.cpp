#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

// Bai 1
float tinh_dien_tich(float a, float b, float c) {
    float p = (a + b + c) / 2;
    float S = sqrt(p * (p - a) * (p - b) * (p - c));
    return S;
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

// Bai 4
char* random_chars(int n) {
    
	srand(time(NULL));

    char* result = (char*)calloc(n,sizeof(char));

    int i = 0;
    while (i < n) {
        char c = 'a' + rand() % 26;

        if (strchr(result, c) == NULL) {
            result[i] = c;
            i++;
        }
    }

    return result;
}

int main(){
	int choice;
	int n;
	float a, b, c, S; 
	int size;
	bool is_running = true;
	do { printf("\n1- Bai 1 \n");
 		printf("2- Bai 2 \n");
 		printf("3- Bai 3 \n");
 		printf("4- Bai 4 \n");
 		printf("5- Quit \n");
 		printf("Select an operation: ");
 		scanf("%d", &choice);
 			switch(choice)
 				{ case 1:
 					
    				printf("Nhap do dai 3 canh cua tam giac: ");
    				scanf("%f %f %f", &a, &b, &c);
    				S = tinh_dien_tich(a, b, c);
    				printf("Dien tich tam giac la: %0.2f", S);
    				break;
    			   
				   case 2:
				   	
    			   	printf("Enter a number: ");
    				scanf("%d", &n);
					if (isSumOfTwoPerfectSquares(n)) {
       					 printf("%d is the sum of two perfect squares.\n", n);
    					} else {
        				printf("%d is not the sum of two perfect squares.\n", n);
    				}
					break;
					
    			   case 3:
    			   	
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
    				break;
    				
    			   /*case 4:
    			   	
    				printf("nhap n:");
    				scanf("%d",&n);
    				char* a = random_chars(n);

    				for (int i = 0; i < n; i++) {
        				printf("%c ", a[i]);
    				}
    				printf("\n");

    				
    				break;
    				
    			   case 5:
    			   	printf("Goodbye!\n");
                	is_running = false;
                	break;*/
    			}
    	}
    while (is_running);
    return 0;
}
    
