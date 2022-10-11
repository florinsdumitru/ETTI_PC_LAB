// moodle problema bonus
#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);

    int counter = 0;
    unsigned long nfactorial = 1;

    for (unsigned int i = 1; i <= n; i++) {
        nfactorial *= i;
	while (nfactorial % 10 == 0) {
	    counter ++;
	    nfactorial /= 10;
	}
    }
    printf("%d", counter);
    return 0;
}

