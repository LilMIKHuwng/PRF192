#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nh?p vào m?t chu?i kí t?: ");
    gets(str);
    printf("S? kí t? trong chu?i là: %d", strlen(str));
    return 0;
}

