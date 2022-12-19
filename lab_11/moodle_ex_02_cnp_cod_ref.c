#include <stdio.h>

struct Cnp {
    int gender;
    int birthday;
    int birthmonth;
    int birthyear;
    int suffix;
};

struct Person {
    char name[256];
    struct Cnp cnp;
};

struct Person readPerson() {
    struct Person p;
    unsigned long long cnp;
    scanf(" %[^,],%llu", p.name, &cnp);
    
    p.cnp.gender = cnp / 1000000000000;
    p.cnp.birthyear = 1900 + cnp / 10000000000 % 100;
    p.cnp.birthmonth = cnp / 100000000 % 100;
    p.cnp.birthday = cnp / 1000000 % 100;
    p.cnp.suffix = cnp % 10000;
    return p;
}

int isBornIn1994(struct Person p) {
    return p.cnp.birthyear == 1994;
}

int main() {
    int n;
    scanf("%d ", &n);
    while(n--) {
        struct Person newPerson = readPerson();
        if(isBornIn1994(newPerson)) {
            printf("%s,", newPerson.name);
        }
    }
    
    return 0;
}