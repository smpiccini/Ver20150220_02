#include <stdio.h>
#include <stdlib.h>

#define N 6

int main(int argc, char** argv) {
    int i;
    int eta[N];
    int presidenti; // potenziali presidenti della repubblica
    int massima;    // età massima
    int minima;     // età minima
    int somma;      // somma di tutte le età
    float media;    // eta media
    
    printf("Inserisci l'eta' di %d persone\n", N);
    for(i=0; i<N; i++) {
        printf("Inserisci l'eta' della %da persona: ", i+1);
        scanf("%d", &(eta[i]));
    }
    
    presidenti = 0;
    massima = 0;
    minima = 300; // un'età difficilmente raggiungibile...
    somma = 0;
    for(i=0; i<N; i++) {
        somma += eta[i];
        
        if(eta[i] > massima) {
            massima = eta[i];
        }
        else {
            if(eta[i] < minima){
                minima = eta[i];
            }
        }
        
        if(eta[i] >= 50) {
            presidenti++;
        }
    }
    media = (float)somma / N; // Necessario il casting per ottenere valore decimale corretto
    
    printf("\nEta' media: %f\n", media);
    printf("Eta' massima: %d\n", massima);
    printf("Eta' minima: %d\n", minima);
    printf("Numero di potenziali Presidenti della Reppubblica: %d\n", presidenti);
    

    return (EXIT_SUCCESS);
}

