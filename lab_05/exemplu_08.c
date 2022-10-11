// structura decizionala switch-case
#include <stdio.h>

int main() {

    printf("Introduceti numarul laboratorului pentru a afla titlul lectiei\n");
    int variabilaTestata;
    scanf("%d", &variabilaTestata);

// obs: discutie break (optional)
// obs: discutie tip admis pt variabilaTestata
    
    switch (variabilaTestata) {
        case 0:
            printf("Coding style\n");
            break;
        case 1:
            printf("Linux\n");
            break;
        case 2:
            printf("GNU Compiler collection, GNU Make\n");
            break;
        case 3:
            printf("Stream-urile unui proces\n");
            break;
        case 4:
            printf("Tipuri de date numerice; op. aritmetici si op. pe biti\n");
            break;
        case 5:
            printf("Expresii conditionale\n");
            break;
        default:
            printf("Va urma...\n");
    }
}

