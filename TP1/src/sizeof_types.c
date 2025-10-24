#include <stdio.h>

int main(void) {
    printf("Tailles des types de base en octets :\n\n");

    printf("char              : %zu octet(s)\n", sizeof(char));
    printf("unsigned char     : %zu octet(s)\n", sizeof(unsigned char));
    printf("signed char       : %zu octet(s)\n", sizeof(signed char));

    printf("\nshort             : %zu octet(s)\n", sizeof(short));
    printf("unsigned short    : %zu octet(s)\n", sizeof(unsigned short));

    printf("\nint               : %zu octet(s)\n", sizeof(int));
    printf("unsigned int      : %zu octet(s)\n", sizeof(unsigned int));

    printf("\nlong int          : %zu octet(s)\n", sizeof(long int));
    printf("unsigned long int : %zu octet(s)\n", sizeof(unsigned long int));

    printf("\nlong long int          : %zu octet(s)\n", sizeof(long long int));
    printf("unsigned long long int : %zu octet(s)\n", sizeof(unsigned long long int));

    printf("\nfloat             : %zu octet(s)\n", sizeof(float));
    printf("double            : %zu octet(s)\n", sizeof(double));
    printf("long double       : %zu octet(s)\n", sizeof(long double));

    return 0;
}
