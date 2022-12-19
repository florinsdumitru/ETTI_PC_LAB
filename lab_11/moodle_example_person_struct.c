#include <stdio.h>

struct Person {
    char name[256];
    int age;
};

int main() {
    int n;
    scanf("%d\n", &n);
    struct Person personList[n];
    
    int maxIndex = 0;
    int maxAge = 0;

    for (int i = 0; i < n; i++) {
        scanf("%[^,],%d\n", personList[i].name, &personList[i].age);
        if (personList[i].age > maxAge) {
            maxAge = personList[i].age;
            maxIndex = i;
        }
    }
    printf("%s",personList[maxIndex].name);
    return 0;
}
