#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int t1[11];
    float t2[11];
    srand(time(NULL));
    for (int i = 0; i < 11; i++) {
        *(t1+i) = rand() % 100;
        *(t2+i) = (rand() % 1000) / 10.0f;
    }
    printf("Tableau d'entiers (avant) :\n");
    for (int i = 0; i < 11; i++) printf("%d ", *(t1+i));
    printf("\nTableau float (avant) :\n");
    for (int i = 0; i < 11; i++) printf("%.2f ", *(t2+i));
    printf("\n");
    for (int i = 0; i < 11; i += 2) {
        *(t1+i) *= 3;
        *(t2+i) *= 3;
    }
    printf("Tableau d'entiers (après) :\n");
    for (int i = 0; i < 11; i++) printf("%d ", *(t1+i));
    printf("\nTableau float (après) :\n");
    for (int i = 0; i < 11; i++) printf("%.2f ", *(t2+i));
    printf("\n");
    return 0;
}
