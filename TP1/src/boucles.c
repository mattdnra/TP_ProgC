#include <stdio.h>

int main(void) {
    int compteur = 5;

    printf("Triangle avec boucles for :\n");
    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % 2 == 0 && j > 1 && j < i)
                printf("# ");
            else
                printf("* ");
        }
        printf("\n");
    }

    printf("\nTriangle avec boucle while :\n");
    int i = 1;
    while (i <= compteur) {
        int j = 1;
        while (j <= i) {
            if (i % 2 == 0 && j > 1 && j < i)
                printf("# ");
            else
                printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
