#include <stdio.h>

int main() {
    int nrRanduri;
    int nrColoane;
    int myRand;
    int myColoana;
    int result;

    scanf("%d %d %d %d", &nrRanduri, &nrColoane, &myRand, &myColoana);
    result = (nrRanduri - myRand) * (nrColoane - myColoana + 1);

    printf("%d", result);
    return 0;
}

