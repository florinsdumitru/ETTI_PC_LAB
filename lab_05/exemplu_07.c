// operatorul conditional ( ? :), aka. operatorul ternar
// (conditie) ? (expresie 1) : (expresie 2)
#include <stdio.h>

int main() {
    int a = 0;
    int b = 1;

// v1
    
    if (a > b)
        printf("a este mai mare decat b\n");
    else
        printf("a este mai mic sau egal cu b\n");
        
// v2
    printf(a > b ? "a este mai mare decat b\n" : "a este mai mic sau egal cu b\n");

// v3
    (a > b) ? (printf("a este mai mare decat b\n")) : (printf("a este mai mic sau egal cu b\n"));
   
    return 0;
}

