// (optimizarea timpului de executie) ce va afisa urmatorul program?
#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    
    if (++a || ++b) {                       // <--- pay attention here
        printf("%d %d", a, b);
    }
    else {
        printf("Wayne Rooney");
    }
    return 0;
}

