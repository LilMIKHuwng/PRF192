#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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

int main() {
    
    int n;
    printf("nhap n:");
    scanf("%d",&n);
    char* arr = random_chars(n);

    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}

