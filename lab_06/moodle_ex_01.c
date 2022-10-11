// moodle problema #1 - nr prim
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) {
        printf("EROARE");
    } else if (n == 1) {
        printf("NU");
    } else if (n == 2) {
        printf("DA");
    } else {
        int prim = 1;
	for (int i = 2; i <= (n / i); i++) {
            if (n % i == 0) {
                prim = 0;
		break;
	    }
	}
	if (prim) {
            printf("DA");
	} else {
            printf("NU");
	}
    }
    return 0;
}

