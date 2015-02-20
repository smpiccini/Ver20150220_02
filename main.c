#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    const int N=6;
    int persone[N];
    int max,min,presidenti=0;
    float media,somma=0;
    int i=0;
    
    printf("Inserisci l'eta' di %d persone\n", N);
    while (i<N) {
        printf("Inserisci l'eta' della %da persona: ", i+1);
        scanf("%d", &persone[i]);
        if (i==0) {
            max=persone[0];
            min=persone[0];
        }
        if (persone[i]>max) {
            max=persone[i];
        }
        else if (persone[i]<min) {
            min=persone[i];
        }
        if (persone[i]>=50) {
            presidenti++;
        }
        somma=somma+persone[i];
        i++;
    }
    media=somma/N;
    printf("\n");
    printf("Eta' media: %f\n", media);
    printf("Eta' massima: %d\n", max);
    printf("Eta' minima: %d\n", min);
    printf("Numero di potenziali Presidenti della Reppubblica: %d\n", presidenti);
    
    return (EXIT_SUCCESS);
}

