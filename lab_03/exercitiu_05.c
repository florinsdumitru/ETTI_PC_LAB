#include <stdio.h>
#include <math.h>

int main() {
    double x;
    double result;
    scanf("%lf", &x);
    result = (3.6 * exp(x) + cos(2 * x)) / (x + 1);
    printf("%e", result);
    return 0;
}

