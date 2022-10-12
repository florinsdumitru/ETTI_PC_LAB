// platforma exemplu #3 - parcurgere matrici

#include <stdio.h>

int main() {
    int maxSize = 5;
    int v[maxSize][maxSize]; // 4 x 5 x 5 = 100 octeti
    
    int linii, coloane;
    printf("Introduceti nr. de linii: ");
    scanf("%d", &linii);
    
    printf("Introduceti nr. de coloane: ");
    scanf("%d", &coloane);

    printf("Acces via indici (asupra matricei initiale):\n");
    for (int i = 0; i < maxSize; i++) {
        for (int j = 0; j < maxSize; j++) {
        printf("v[%d][%d] = %d\n", i, j, v[i][j]);
        }
        printf("\n");
    }

    printf("Incarcarea cu valori a matricei:\n");
    for (int i = 0; i < linii && i < maxSize; i++) {
        for (int j = 0; j < coloane && i < maxSize; j++) {
            printf("v[%d][%d] = ", i, j);
            scanf("%d", &v[i][j]);
        }
        printf("\n");
    }

    printf("Acces via indici:\n");
//    for (int i = 0; i < linii && i < maxSize; i++) {
    for (int i = 0; i < maxSize; i++) {
//        for (int j = 0; j < coloane && j < maxSize; j++) {
        for (int j = 0; j < maxSize; j++) {
        printf("v[%d][%d] = %d\n", i, j, v[i][j]);
        }
        printf("\n");
    }
    
    printf("Acces via pointer:\n");
//    for (int i = 0; i < linii && i < maxSize; i++) {
    for (int i = 0; i < maxSize; i++) {
//        for (int j = 0; j < coloane && j < maxSize; j++) {
        for (int j = 0; j < maxSize; j++) {
            printf("serializare v[%d] = %d\n", i * maxSize + j, *(*(v + i) + j));
        }
    }    
    return 0;
}

