// moodle exemplu

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    
    float M = 0, d = 0;
    float v[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%f", &v[i]);
        M += v[i];
    }
    
    M /= n;
    
    for (int i = 0; i < n; i++) {
        d += pow((v[i] - M), 2);
    }
    
    d /= (n - 1);
    d = sqrt(d);
    
    for (int i = 0; i < n; i++) {
        if (v[i] >= (M - d) && v[i] <= (M + d)) {
            printf("%.2f ", v[i]);
        }
    }
    
    return 0;
}