#include <stdio.h>

int main() {
    int nr;
    int result = 0;
    scanf("%d", &nr);
    
    result += nr % 10; 
    nr /= 10;
    result += nr % 10;
    nr /= 10;
    result += nr % 10;

    printf("%d", result);
    return 0;
}

