#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_voti;
    float media = 0;
    printf("Media senza inizializzazione %f", media);
    printf("Numero di voti: ");
    scanf("%d", &num_voti);
    for(int i = 0; i < num_voti; i++){
        int voto;
        printf("Inserisci voto %d ", i+1);
        scanf("%d", &voto);
        media+=voto;
    }
    media = media / num_voti;
    printf("Media: %f", media);
    return 0;
}