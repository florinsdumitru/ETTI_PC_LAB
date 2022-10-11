#include <stdio.h>

int main() {
    float val;
    scanf("%f", &val);
    printf("%.3f %.3f", (val + 273.15), (val * 9.0/5.0 + 32.0));
    return 0;
}

