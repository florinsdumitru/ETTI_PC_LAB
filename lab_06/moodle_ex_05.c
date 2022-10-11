#include <stdio.h>

int main() {
    unsigned int n;
    scanf("%u", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                printf("1 ");
	    } else {
		printf("0 ");
	    }
	}
	printf("\n");
    }
    return 0;
}

