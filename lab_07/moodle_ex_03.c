// moodle ex 03 - FFT
#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    
    float v[n];
    for (int i = 0; i < n; i++) {
        scanf("%f", &v[i]);
    }
    
    if (n % 2 == 0) {
        for (int i = n/2; i < n; i++) {
            printf("%.2f ", v[i]);
        }
        for (int i = 0; i < n/2; i++) {
            printf("%.2f ", v[i]);
        }
    } else {
        printf("Numar impar");
    }
    
    return 0;
}
