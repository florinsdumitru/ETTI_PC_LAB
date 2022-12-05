// moodle exercise 3 - dot product
#include <stdio.h>

int columnSum(int n, int m, int arr[n][m], int index) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i][index];
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int m;
    scanf("%d", &m);
    
    int arr[n][m];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    int index;
    while (EOF != scanf("%d ", &index)) {
        int sum = columnSum(n, m, arr, index);
        printf("%d ", sum);
    }
    return 0;
}