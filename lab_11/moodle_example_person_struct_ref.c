#include <stdio.h>

struct Person {
    char name[256];
    unsigned age;
};

int main() {
    int n;
    scanf("%d", &n);
    struct Person oldest;
    scanf(" %[^,],%u ", oldest.name, &oldest.age);
    n--;
    while(n--) {
        struct Person newPerson;
        scanf("%[^,],%u ", newPerson.name, &newPerson.age);
        if(newPerson.age > oldest.age) oldest = newPerson;
    }
    printf("%s", oldest.name);
    return 0;
}