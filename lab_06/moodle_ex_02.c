// moodle problema #2 - reprezentarea binara
#include <stdio.h>

int main() {
    long n;
    scanf("%ld", &n);

    for (int i = 63; i >= 0; i--) {
        printf("%d", (n & (1L << i)) ? 1 : 0);
    }
    return 0;
}

