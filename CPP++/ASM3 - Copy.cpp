#include <stdio.h>
#include <string.h>

int main() {
    char names[7][8] = {"George", "Albert", "Tina", "Xavier", "Roger", "Tim", "William"};
    int i, j;
    char t[8];

    for (i = 0; i < 6; i++) {
        for (j = i+1; j < 7; j++) {
            if (strcmp(names[i], names[j]) > 0) {
                strcpy(t, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], t);
            }
        }
    }

    printf("Ten da duoc sap xep la:\n");
    for (i = 0; i < 7; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

