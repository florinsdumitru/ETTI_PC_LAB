// exemplu operatori relationali si logici
#include <stdio.h>

int main() {
    int a = 2;
    int b = 6;
    int c = 0;
    int result;
    
    result = !(a < c) && (a < b) || (b <=c);
    
    printf("result is %d\n", result);
    return 0;
}

