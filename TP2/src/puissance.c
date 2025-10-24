#include <stdio.h>

int main() {
    int a = 2, b = 3, res = 1, i;
    for (i = 0; i < b; i++) res *= a;
    printf("%d^%d = %d\n", a, b, res);
    return 0;
}
