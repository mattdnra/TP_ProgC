#include <stdio.h>

int main() {
    int n = 7, i;
    int a = 0, b = 1, c;
    printf("%d, %d", a, b);
    for (i = 2; i <= n; i++) {
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}
