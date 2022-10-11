#include <stdio.h>

int main() {
    int n;
    int aux;
    int sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &aux);
	sum += aux;
    }
    printf("%d", sum);
    return 0;
}

