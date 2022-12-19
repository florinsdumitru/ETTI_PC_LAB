#include <stdio.h>

enum StudentState {
    FAILED,
    PASS,
    NONE = -1
};

int medieX(int nota_sem, int nota_lab, int nota_partial, int nota_final) {
    int medie = (nota_sem + nota_lab + nota_partial + nota_final)/4;
    if (medie < 38) {
        return medie;
    }
    if (medie % 5 > 2){
        return (medie - medie % 5 + 5);
    }
    return medie;
}

struct Student {
    char nume[256];
    int nota_sem;
    int nota_lab;
    int nota_partial;
    int nota_final;
    enum StudentState state;
};

int main() {
    int n;
    scanf("%d ", &n);
    
    struct Student c[n]; //catalog
    
    for(int i = 0; i < n; i++) {
        scanf("%[^,],%d %d %d %d ", c[i].nume, &c[i].nota_sem, &c[i].nota_lab, &c[i].nota_partial, &c[i].nota_final);
        if (medieX(c[i].nota_sem, c[i].nota_lab, c[i].nota_partial, c[i].nota_final) >= 50) {
            c[i].state = PASS;
        } else {
            c[i].state = FAILED;
        }
    }
    
    for(int i = 0; i < n; i++) {
        printf("%s %s\n", c[i].nume, c[i].state == 1 ? "TRECUT" : "PICAT");
    }
}
