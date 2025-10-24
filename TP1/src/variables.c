#include <stdio.h>

int main(void) {
    char c = 'A';
    signed char sc = -65;
    unsigned char uc = 200;

    short s = -12345;
    unsigned short us = 54321;

    int i = -100000;
    unsigned int ui = 100000U;

    long int li = -123456789L;
    unsigned long int uli = 123456789UL;

    long long int lli = -9876543210LL;
    unsigned long long int ulli = 9876543210ULL;

    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.414213562373095L;

    printf("Valeurs des variables de base :\n\n");

    printf("char                : %c\n", c);
    printf("signed char         : %d\n", sc);
    printf("unsigned char       : %u\n", uc);

    printf("\nshort               : %d\n", s);
    printf("unsigned short      : %u\n", us);

    printf("\nint                 : %d\n", i);
    printf("unsigned int        : %u\n", ui);

    printf("\nlong int            : %ld\n", li);
    printf("unsigned long int   : %lu\n", uli);

    printf("\nlong long int       : %lld\n", lli);
    printf("unsigned long long int : %llu\n", ulli);

    printf("\nfloat               : %.2f\n", f);
    printf("double              : %.9f\n", d);
    printf("long double         : %.15Lf\n", ld);

    return 0;
}
