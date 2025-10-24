#include <stdio.h>

int main() {
    printf("Tailles des types de base en octets :\n\n");

    printf("char              : %zu octet(s)\n", sizeof(char));
    printf("short             : %zu octet(s)\n", sizeof(short));
    printf("int               : %zu octet(s)\n", sizeof(int));
    printf("long int          : %zu octet(s)\n", sizeof(long int));
    printf("long long int     : %zu octet(s)\n", sizeof(long long int));
    printf("float             : %zu octet(s)\n", sizeof(float));
    printf("double            : %zu octet(s)\n", sizeof(double));
    printf("long double       : %zu octet(s)\n", sizeof(long double));

    return 0;
}
