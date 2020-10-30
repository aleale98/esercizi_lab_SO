#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    printf("Inserisci un carattere: ");
    scanf("%c", &c);
    if((c>='a' && c <= 'z') || (c>='A' && c<='Z')){
        printf("Lettera");
    }else if(c >= '0' && c <= '9'){
        printf("Numero");
    }else{
        printf("Non è alfanumerico");
    }
    return 0;
}