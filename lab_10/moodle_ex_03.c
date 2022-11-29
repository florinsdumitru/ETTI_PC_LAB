// moodle ex 03 - normalizare imagine si extras max freq pixels
#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main() {
    
    uint8_t width;
    uint8_t height;
    scanf("%hhu %hhu", &width, &height);
    
    uint8_t arr[height][width];
    
    uint8_t min = 255;
    uint8_t max = 0;
    
    for (uint8_t i = 0; i < height; i++) {
        for (uint8_t j = 0; j < width; j++) {
            scanf("%hhu", &arr[i][j]);
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
            if (arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    
    double gain = 1.0 * 255 / (max - min);
    double offset = - 1.0 * min * gain;
    
    int elemNo = 256;
    int histogram[elemNo];
    int maxElem = 0;
    
    for (int i = 0; i < elemNo; i++) {
        histogram[i] = 0;
    }    
    
    for (uint8_t i = 0; i < height; i++) {
        for (uint8_t j = 0; j < width; j++) {
            arr[i][j] = (uint8_t) floor(arr[i][j] * gain + offset + 0.5);
            histogram[arr[i][j]]++;
            
            if (histogram[arr[i][j]] > maxElem) {
                maxElem = histogram[arr[i][j]];
            }
        }
    }
    
    for (int i = 0; i < elemNo; i++) {
        if (histogram[i] == maxElem) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
