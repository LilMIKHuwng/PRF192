#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nh?p v�o m?t chu?i k� t?: ");
    gets(str);
    printf("S? k� t? trong chu?i l�: %d", strlen(str));
    return 0;
}

