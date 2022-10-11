#include <stdio.h>

int main() {
    int x;
    int result;
    scanf("%d", &x);
    result = x % 10 + x / 100 * 10 ;
    printf("%d", result * result);
    return 0;
}

