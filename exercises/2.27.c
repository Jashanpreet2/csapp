#include <stdio.h>
#include <limits.h>

int uadd_ok(unsigned x, unsigned y) {
    return x+y >= x;
}

int main() {
    printf("%d\n", uadd_ok(0, UINT_MAX));
    return 0;
}