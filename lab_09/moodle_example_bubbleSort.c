// moodle example - bubble sort
#include <stdio.h>
#include <stdint.h>

void bubbleSort(uint8_t n, int32_t v[]){
    for (uint8_t i = 0; i < n - 1; i++){
        for (uint8_t j = 0; j < n - i - 1; j++){
            if (v[j] > v[j + 1]){
                int32_t t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
            }
        }
    }

    for (uint8_t i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    return;
}

int main() {
  uint8_t n;
  scanf("%hhd", &n);
  int32_t v[n];
  for (uint8_t i = 0; i < n; i++){
    scanf("%d", &v[i]);
  }

  bubbleSort(n, v);
  return 0;
}
