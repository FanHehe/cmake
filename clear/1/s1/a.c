#include <stdio.h>

int main () {
    int a = 1;
    extern int b;
    printf("%d %d", a, b);
    return 0;
}
