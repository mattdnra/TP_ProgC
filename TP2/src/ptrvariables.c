#include <stdio.h>

int main() {
    int i = 0x12345678;
    int *p = &i;
    printf("%p %x\n", (void*)p, *p);
    *p -= 1;
    printf("%p %x\n", (void*)p, *p);
    return 0;
}
