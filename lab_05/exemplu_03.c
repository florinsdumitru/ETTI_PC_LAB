// exemplu #3 - ce va afisa acest program prost indentat
#include <stdio.h>

int main() {

    int number = 4;
    double alpha = -1.0;

    printf("Introduceti number (default: 4) si alpha (default: -1.0):");
    scanf("%d %lf", &number, &alpha);

    if (number > 0)
        if (alpha > 0)
            printf("Here I am!\n");
    else
        printf("No, I'm here!\n");
    printf("No, actually, I'm here\n");
        
    return 0;
}

