// platforma exemplu #1 - declarare vectori

#include <stdio.h>

int main() {
    int v1[5];
    int v2[5] = {1, 2, 3, 4, 5};
    int v3[] = {6, 7, 8, 9, 10};
    int v4[10] = {11, 12, 13, 14, 15};
    
    printf("v1\n");
    for (int i = 0; i < sizeof v1 / sizeof *v1; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");
    
    printf("v2\n");
    for (int i = 0; i < sizeof v2 / sizeof *v2; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");

    printf("v3\n");
    for (int i = 0; i < sizeof v3 / sizeof *v3; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");

    printf("v4\n");
    for (int i = 0; i < sizeof v4 / sizeof *v4; i++) {
        printf("%d ", v4[i]);
    }
    printf("\n");

    return 0;
}

