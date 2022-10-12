// platforma exemplu #2 - citire si scriere vectori

#include <stdio.h>

int main() {
    int maxSize = 10;
    int v[maxSize], n, i;
    
    printf("Introduceti nr. de elemente: ");    
    scanf("%d", &n);
    
    for (int i = 0; i < n && i < maxSize; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
        printf("\n");
    }

    printf("\nAcces via indice:\n");    
    for (int i = 0; i < n && i < maxSize; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
    
    int *ptr = v;
    printf("\nAcces via pointer:\n");    
    for (int i = 0; i < n && i < maxSize; i++) {
        printf("v[%d] = %d\n", i, *(ptr + i));
    }

    return 0;
}

