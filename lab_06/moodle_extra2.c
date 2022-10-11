#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t n;
    scanf("%u", &n);

    uint32_t zeros = 0;
    for (uint32_t i = 5; i <= n; i *= 5) {
        zeros += n / i;
    }
    printf("%u", zeros);
    return 0;
}

