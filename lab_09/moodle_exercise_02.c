// moodle exercise 2 - dot product
#include <stdio.h>
#include <stdint.h>

float dotProduct(uint32_t n, float a[], float b[]){
    float res = 0;
    for (int i = 0; i < n; i++) {
        res += a[i] * b[i];
    }
    return res;
}

int main() {
    uint32_t n;
    scanf("%u", &n);

    float a[n], b[n];

    for (int i = 0; i < n; i++){
        scanf("%f", &a[i]);
    }

    for (int i = 0; i < n; i++){
        scanf("%f", &b[i]);
    }

    printf("%.3f", dotProduct(n, a, b));
    return 0;
}
