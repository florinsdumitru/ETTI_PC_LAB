#include <stdio.h>

int main() {
    int x;
    int result = 1;

    scanf("%d", &x);

    while (x) {
        result *= x % 10;
	x /= 10;
    }

    printf("%d", result);
}

