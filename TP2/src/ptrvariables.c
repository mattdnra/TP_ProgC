#include <stdio.h>

int main() {
    int i = 0x12345678;
    int *pi = &i;
    printf("Adresse de i : %p, Valeur de i : %x\n", (void*)pi, *pi);
    *pi -= 1;
    printf("Adresse de i : %p, Valeur de i : %x\n", (void*)pi, *pi);
    return 0;
}
