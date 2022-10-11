// daca nu exista blocuri de instructiuni, un else este legat de if-ul imediat anterior
#include <stdio.h>

int main() {

    int a;
    int b;
    printf("Introduceti numerele a si b\n");
    scanf ("%d %d", &a, &b);

    if (a > 5)
        if (b > a)                                 // <-- pair
        printf ("b este mai mare ca a\n");
        else
        printf ("b este mai mic sau egal cu a\n"); // <-- pair
        
    return 0;
}

