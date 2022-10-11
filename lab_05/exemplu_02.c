// daca exista blocuri de instructiuni, un else este legat de ultimul if fara pereche
#include <stdio.h>

int main() {

    int a;
    int b;
    printf("Introduceti numerele a si b:\n");
    scanf ("%d %d", &a, &b);

    if (a > 5) {                                // <--- pair
        if (b > a)
            printf ("b este mai mare ca a\n");
    }
    else
        printf ("a nu este mai mare ca 5\n");   // <--- pair
        
    return 0;
}

