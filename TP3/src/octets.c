#include <stdio.h>

int main() {
    short s=0x0203;
    int i=0x01020304;
    long int l=0x0102030405060708;
    float f=10.0;
    double d=1.0;
    long double ld=1.0;

    unsigned char *p;
    p=(unsigned char*)&s;
    printf("Octets de short :\n");
    for(int i=0;i<sizeof(s);i++) printf("%02x ",p[i]);
    printf("\n");

    p=(unsigned char*)&i;
    printf("Octets de int :\n");
    for(int i=0;i<sizeof(i);i++) printf("%02x ",p[i]);
    printf("\n");

    p=(unsigned char*)&l;
    printf("Octets de long int :\n");
    for(int i=0;i<sizeof(l);i++) printf("%02x ",p[i]);
    printf("\n");

    p=(unsigned char*)&f;
    printf("Octets de float :\n");
    for(int i=0;i<sizeof(f);i++) printf("%02x ",p[i]);
    printf("\n");

    p=(unsigned char*)&d;
    printf("Octets de double :\n");
    for(int i=0;i<sizeof(d);i++) printf("%02x ",p[i]);
    printf("\n");

    p=(unsigned char*)&ld;
    printf("Octets de long double :\n");
    for(int i=0;i<sizeof(ld);i++) printf("%02x ",p[i]);
    printf("\n");
    return 0;
}
