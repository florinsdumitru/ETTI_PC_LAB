// moodle ex 02 - max histograma
uint32_t getHistogram(int noElem, uint8_t arr[], uint32_t histograma[]) {
    
    // initializam vectorul
    for (int i = 0; i < 256; i++) {
        histograma[i] = 0;
    }

    uint32_t max = 0;
    if (noElem <= 256) {
        for (int i = 0; i < noElem; i++) {
            histograma[arr[i]]++;
            if (max < histograma[arr[i]]){
                max = histograma[arr[i]];
            }
        }
    } else {
        for (int i = 0; i < noElem; i++) {
            histograma[arr[i]]++;
        }
        
        for (int i = 0; i < 256; i++) {
            if (max < histograma[i]) {
                max = histograma[i];
            }
        }    
    }
    return max;
}
