// moodle exercise 1 - print the first N prime numbers
#include <stdio.h>
#include <stdint.h>

int isPrime(uint32_t n){
    if (n < 2){
        return 0;
    } else {
        for (int i = 2; i <= n/i; i++){
            if (n % i == 0){
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    uint32_t n;
    scanf("%u", &n);
    
    uint32_t crt = 2;
    while (n){
        if (isPrime(crt)){
            printf("%d ", crt);
            n--;
        }
        crt++;
    }
    return 0;
}
