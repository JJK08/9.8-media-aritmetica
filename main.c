#include <stdio.h>

#include "funzione media.h"

int main() {
    int numero_valori;
    float somma_valori, media;

    printf("Inserisci il numero di valori: ");
    scanf("%d", &numero_valori);

    printf("Inserisci la somma dei valori: ");
    scanf("%f", &somma_valori);
    calcola_media(numero_valori,somma_valori);

        printf("%.2f",media);

    return 0;
}

