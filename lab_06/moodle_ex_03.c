#include <stdio.h>

int main() {
    long n;
    scanf("%ld", &n);

    while (n) {
        printf("%ld", n % 10);
	n /= 10;
    }
    return 0;
}

