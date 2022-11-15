// moodle ex 02 - insertia unui element
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int v[n + 1];
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    
    int k;
    scanf("%d", &k);
    
    int e;
    scanf("%d", &e);
    
    if (k < 0 || k > n) {
        printf("Index invalid");
    } else {
        for (int i = n - 1; i >= k; i--) {
            v[i + 1] = v[i];
        }
        v[k] = e;
        
        for (int i = 0; i < n + 1; i++) {
        printf("%d ", v[i]);
        }
    }
}
