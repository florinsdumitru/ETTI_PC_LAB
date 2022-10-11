#include <stdio.h>

int main() {
    char autorTeorie[20] = "Richard Laming";
    char anTeorie[10] = "1838-1851";
    char autorDescoperire[20] = "J. J. Tompson";
    int anDescoperire = 1897;
    double masa = 9.1e-31;
    double durataViata = 6.6e+28;
    int sarcina = -1;
    int sarcinaAux = -1;
    
    fprintf(stdout, "Electronul:\n\tTeoretizat de catre: %s (%s)\
            \n\tDescoperit de catre: %s (%d)\n\tMasa: %e kg\
            \n\tDurata de viata: >%g ani\n\tSarcina: %d\n", autorTeorie,
            anTeorie, autorDescoperire, anDescoperire, masa, durataViata,
            sarcina);
            
    fprintf(stderr, "\nPointer sarcina: %p\nPointer sarcinaAux: %p\
            \nDiferenta locatii memorie: %ld\n",
            (void *) &sarcina, (void *) &sarcinaAux, (void *) &sarcinaAux - (void *) &sarcina);
}

// To do:
// experiment with %u vs. %d
// experiment without casting the pointer subtraction to void 

