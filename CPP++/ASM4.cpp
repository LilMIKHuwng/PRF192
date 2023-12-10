#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char word[50];
    int nguyen = 0, phu = 0, i;

    printf("Nhap chuoi ki tu: ");
    gets(word);
    //strlwr(word);

    for (i = 0; i < strlen(word); i++) {
        if (isalpha(word[i])) {
            if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ||
                word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U') {
                nguyen++;
            } else {
                phu++;
            }
        }
    }
    
	printf("Chuoi da nhap : %s\n",word);
    printf("So cac tu nguyen am: %d\n", nguyen);
    printf("So cac tu phu am: %d\n", phu);

    return 0;
}

