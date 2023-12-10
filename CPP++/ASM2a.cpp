#include <stdio.h>

int main() {
    int i, j;

    for (i = 10; i >= 1; i--) {
    	 if (i==9||i==7||i==5) continue; 
    	
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
