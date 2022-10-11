// exemplu #4 - break si continue
#include <stdio.h>

int main() {
    int a = 10;
    while (a < 20) {
        a++;
	if (a == 13) {
            continue;
	}
	printf("value of a: %d\n", a);
	if (a > 16) {
            break;
	}
    }
    return 0;
}

