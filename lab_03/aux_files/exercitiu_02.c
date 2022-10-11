#include <stdio.h>

int main() {
    int integerValue1;
    int integerValue2;
    int integerValue3;
    int product;
    fprintf(stdout, "Introduceti cele trei numere: ");
    fscanf(stdin, "%d %d %d", &integerValue1, &integerValue2,
            &integerValue3);
    product = integerValue1 * integerValue2 * integerValue3;
    printf("Produsul celor trei numere este %d\n", product);
    return 0;
}

