#include <stdio.h>
#include <string.h>

struct Shape {
    char  forma[20];
    float coef;
    float parA;
    float parB;
    float arie;
};

int main() {
    int n;
    scanf("%d", &n);
    
    struct Shape tmp;
    struct Shape max;
    
    while (n--) {
        scanf("%s", tmp.forma);
        if (strcmp("patrat", tmp.forma) == 0) {
            float l;
            scanf("%f", &l);
            tmp.coef = 1;
            tmp.parA = l;
            tmp.parB = l;
        } else if (strcmp("dreptunghi", tmp.forma) == 0) {
            float l1, l2;
            scanf("%f%f", &l1, &l2);
            tmp.coef = 1;
            tmp.parA = l1;
            tmp.parB = l2;
        } else {
            float r;
            scanf("%f", &r);
            tmp.coef = 3.14;
            tmp.parA = r;
            tmp.parB = r;
        }
        
        if (tmp.coef * tmp.parA * tmp.parB > max.coef * max.parA * max.parB) {
            max = tmp;
        }
    }
    
    if (strcmp(max.forma, "patrat") == 0) {
        printf("%s %.2f", "patrat", max.parA);
    } else if (strcmp(max.forma, "dreptunghi") == 0) {
        printf("%s %.2f %.2f", "dreptunghi", max.parA, max.parB);
    } else {
        printf("%s %.2f", "cerc", max.parA);
    }
}
