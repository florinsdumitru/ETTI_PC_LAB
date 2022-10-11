#include <stdio.h>

int main() {
    int a = 20;   // 0b0000_0000_0001_0100
    int b = 4;    // 0b0000_0000_0000_0100

    if (a ^ b) {  // 0b0000_0000_0001_0000
        printf("Rezultatul este diferit de 0.\n");
    } else {
        printf("Rezultatul are valoarea 0.\n");
    }
    return 0;
}

