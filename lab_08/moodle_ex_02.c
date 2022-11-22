// moodle ex 02 - character case swap
#include <stdio.h>

int main() {
    char arr[10240];
    scanf("%[^\n]", arr);
    
    int offset = 'a' - 'A';
    
    for (int i = 0; i < 10240; i++) {
        if (arr[i] >= 'a' && arr[i] <= 'z') {
            arr[i] = arr[i] - offset;
        } else if (arr[i] >= 'A' && arr[i] <= 'Z') {
            arr[i] = arr[i] + offset;
        } else if (arr[i] == '\0') {
            break;
        }
    }
    printf("%s", arr);
    return 0;
}
