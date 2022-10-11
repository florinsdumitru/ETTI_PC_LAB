#include <stdio.h>

int main() {
    int integerValue1;
    int integerValue2;
    int sum;
    fprintf(stdout, "Introduceti cele doua numere: ");
    fscanf(stdin, "%d %d", &integerValue1, &integerValue2);
    sum = integerValue1 + integerValue2;
    printf("Suma celor doua numere este %d\n", sum);
    return 0;
}

