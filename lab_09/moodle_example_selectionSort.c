// moodle example - selection sort
#include <stdio.h>
#include <stdint.h>

void selectionSort(uint8_t N, int32_t arr[]) {
    int32_t copy;
    for(uint8_t i = 0; i < N; i++) {
        for(uint8_t j = i + 1; j < N; j++) {
            if(arr[i] > arr[j]) {
                copy = arr[i];
                arr[i] = arr[j];
                arr[j] = copy;
            }
        }
    }
    for(uint8_t i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    uint8_t N;
    scanf("%hhu", &N);
    int32_t arr[N];
    for(uint8_t i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    selectionSort(N, arr);
    return 0;
}
