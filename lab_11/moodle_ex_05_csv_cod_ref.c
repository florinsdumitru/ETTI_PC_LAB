#include <stdio.h>

struct Day {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[256];
    struct Day birthday;
    float salary;
};

struct Employee readData() {
    struct Employee e;
    scanf(" %[^,],%d-%d-%d,%f", e.name, &e.birthday.day, &e.birthday.month, &e.birthday.year, &e.salary);
    return e;
}

int main() {
    int n, i;
    scanf("%d ", &n);
    struct Employee people[n];
    for(i = 0; i < n; i++) {
        people[i] = readData();
    }
    for(i = n - 1; i >= 0; i--) {
        printf("%s\t%02d-%02d-%04d\t%.2f\n", people[i].name,
                people[i].birthday.day, people[i].birthday.month, people[i].birthday.year,
                people[i].salary);
    }
    return 0;
}