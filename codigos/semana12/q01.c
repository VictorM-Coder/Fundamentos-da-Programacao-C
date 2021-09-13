/*Implemente um programa que recebe uma palavra e imprima essa palavra com cada letra separada com "-". 

O tamanho máximo da palavra é 100.

Nessa questão apenas imprima, sem alterar a cadeia de caracter.*/
#include <stdio.h>

int main(){
    char palavra[100];
    
    scanf("%s", palavra);
    
    int tam=0;
    while(palavra[tam] != '\0'){
        tam++;
    }
    
    for(int c = 0; c < tam; c++){
        printf("%c", palavra[c]);
        if(c < tam -1){
            printf("-");
        }
        
    }
    
    return 0;
}