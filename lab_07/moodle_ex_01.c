// moodle ex 01 - reuniune multimi
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int vn[n];
    
    int m;
    scanf("%d", &m);
    int vm[m];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &vn[i]);
    }
    
    for (int i = 0; i < m; i++) {
        scanf("%d", &vm[i]);
    }
    
    int counter = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (vn[i] == vm[j]) {
                counter++;
                break;
            }
        }
    }
    
    printf("%d", counter);
    return 0;
}
