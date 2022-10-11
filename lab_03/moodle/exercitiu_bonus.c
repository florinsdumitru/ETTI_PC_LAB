#include <stdio.h>

int main() {
    int an;
    scanf("%d", &an);
    printf("%d", an % 100 == 0 ? an / 100 : an / 100 + 1);
    return 0;
}

