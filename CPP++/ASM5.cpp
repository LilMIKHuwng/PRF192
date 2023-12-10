#include <stdio.h>

#define YEARS 5
#define CITIES 5

void find_max_min(float temps[][YEARS], int city, float *max, float *min) {
    int i;

    *max = *min = temps[city][0];

    for (i = 1; i < YEARS; i++) {
        if (temps[city][i] > *max) {
            *max = temps[city][i];
        }

        if (temps[city][i] < *min) {
            *min = temps[city][i];
        }
    }
}

int main() {
    float temps[CITIES][YEARS];
    int i, j;
    float max, min;

    for (i = 0; i < CITIES; i++) {
        printf("\nNhap nhiet do trung binh cua 5 nam cua thanh pho thu %d:\n", i+1);
        for (j = 0; j < YEARS; j++) {
            scanf("%f", &temps[i][j]);
        }

        /*find_max_min(temps, i, &max, &min);
        printf("Nhiet do trung binh cao nhat cua thanh pho thu %d: %.1f\n", i+1, max);
        printf("Nhiet do trung binh thap nhat cua thanh pho thu %d: %.1f\n", i+1, min);
    }*/}
    for (i=0; i<YEARS; i++) {
    	find_max_min(temps, i, &max, &min);
        printf("\nNhiet do trung binh cao nhat cua thanh pho thu %d: %.1f\n", i+1, max);
        printf("Nhiet do trung binh thap nhat cua thanh pho thu %d: %.1f\n", i+1, min);
	}

    return 0;
}

