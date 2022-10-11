#include <stdio.h>

int main() {
    int integerValue;
    fprintf(stdout, "Introduceti o valoare numerica: ");
    fscanf(stdin, "%d", &integerValue);
    printf("Valoarea introdusa este %d\n", integerValue);
    return 0;
}

