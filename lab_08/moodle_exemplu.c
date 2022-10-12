#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char aux[31];
    char ans[31];

    scanf("%s", ans);

    for (int i = 1; i < n; i++) {
        scanf("%s", aux);
	if (strcmp(aux, ans) < 0) {
            strcpy(ans, aux);
	}
    }

    printf("%s", ans);
    return 0;
}

