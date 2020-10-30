#include <stdio.h>
#include <stdlib.h>

/*
Non rispetta a pieno la consegna. Non prende la lista separata da spazi. Il prof però ha dato una soluzione analoga
*/

int main(){
    int somma = 0;
    int voto = 0;
    int contatore = 0;
    float media;
    do{
        printf("Inserisci un voto non negativo >= 0: ");
        scanf("%d", &voto);
        if(voto > 0){
            contatore++;
        }
        somma = somma + voto;
    }while (voto != 0);
    media = contatore != 0 ? (somma/(float)contatore) : -1;
    printf("La media è %f\n", media);
    return 0;
}