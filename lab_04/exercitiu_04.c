#include <stdio.h>

int main() {
    int n;
    long result = 0;

    scanf("%d", &n);
    result = (1l + n) * n / 2;

    printf("%ld", result);
    return 0;
}

