#include <stdio.h>

int main() {
    char s1[] = "Hello", s2[] = " World!", s3[100], s4[100];
    int i = 0, j = 0, len = 0;

    while (s1[len] != '\0') len++;
    printf("Longueur de s1 : %d\n", len);

    while ((s3[i] = s1[i]) != '\0') i++;
    printf("Copie : %s\n", s3);

    i = 0;
    while (s1[i] != '\0') { s4[i] = s1[i]; i++; }
    while (s2[j] != '\0') { s4[i++] = s2[j++]; }
    s4[i] = '\0';
    printf("Concaténation : %s\n", s4);

    return 0;
}
