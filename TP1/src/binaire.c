#include <stdio.h>

void afficherBinaire(unsigned int n) {
    int i;
    int taille = sizeof(n) * 8;
    int bitTrouve = 0;

    printf("Binaire de %u : ", n);

    for (i = taille - 1; i >= 0; i--) {
        if ((n >> i) & 1)
            bitTrouve = 1;
        if (bitTrouve)
            printf("%d", (n >> i) & 1);
    }

    if (!bitTrouve)
        printf("0");

    printf("\n");
}

int main() {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    int i;

    for (i = 0; i < 5; i++) {
        afficherBinaire(nombres[i]);
    }

    return 0;
}
