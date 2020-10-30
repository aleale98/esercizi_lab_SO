#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    /*
    EsercizioA.1
    Scrivere un programma che analizza carattere per carattere la stringa costante di testo ”Hello WoRLd! Today’s temperature is 34°C.”:
    se il carattere analizzato non è una lettera dell’alfabeto o è una lettera minuscola ne fa l’eco sullo standard output, se è una lettera dell’alfabeto
    in maiuscolo(uppercase) la converte in minuscolo(lowercase) e ne fa l’eco.
    */
   char *ptr = "Hello WoRLd! Today's temperature is 34°C.";
   while(*ptr != '\0'){
       char c = *ptr;
       if((c >= 'A' && c <= 'Z')){
           c = c - 'A' + 'a';
       }
       printf("%c", c);
       ptr++;
   }
   printf("\n");
}