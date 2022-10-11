#include <stdio.h>

int main() {
    int a;
    int b;
    
    scanf("%d %d", &a, &b);
    
    if (a == 0) {
        if (b == 0) {
            printf("Bluza subtire");
        } else {
            printf("Paltonul");
        }
    } else {
        if (b == 0) {
            printf("Umbrela");
        } else {
            printf("Umbrela si paltonul");
        }
    }
    return 0;
}

