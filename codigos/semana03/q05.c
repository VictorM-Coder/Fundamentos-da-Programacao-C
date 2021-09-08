//Implemente um programa que recebe o sexo de um bebê que acabou de nascer e imprime Menina ou Menino.
#include <stdio.h>

int main(){
    char ent;
    
    scanf("%c", &ent);
    
    if(ent == 'F'){
        printf("menina");
    } else{
        printf("menino");
    }

    return 0;
}