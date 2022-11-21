// moodle ex 01 - pastrare caractere si un space
#include <stdio.h>

int main() {
    char str[10240];
    scanf("%[^\n]", str);
    int ptr1 = 0;
    int ptr2 = 0;
    
    while (str[ptr1] != '\0') {
        char tmp = str[ptr1];
        if (((tmp >= 'A') && (tmp <= 'Z')) || ((tmp >= 'a') && (tmp <= 'z')) || (tmp == ' ')) {
            str[ptr2] = str[ptr1];
            ptr2++;
        }
        ptr1++;
    }
    str[ptr2] = str[ptr1];
    printf("%s", str);
}
