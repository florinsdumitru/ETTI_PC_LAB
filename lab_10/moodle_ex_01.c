// moodle ex 01 - findMax(int noELem, uint8_t arr[])
uint8_t findMax(int noElem, uint8_t arr[]) {
    uint8_t tmp = 0;
    
    for (int i = 0; i < noElem, i++) {
        if (tmp < arr[i]) {
            tmp = arr[i];
        }
    }
    return tmp;
}

