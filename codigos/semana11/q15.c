/*Implemente um programa que recebe uma cadeia de caracteres e inverta essa cadeia.

Não pode apenas imprimir, obrigatoriamente deve-se alterar a cadeia original e só depois imprimir.*/
#include <stdio.h>

int main(){
    char frase[100];
    scanf("%[^\n]", frase);
    
    int max = 0;
    while(frase[max] != '\0'){
        max++;
    }
    
    max--;
    char inversa[100];
    for(int cont = max, i =0; cont >=0; cont--, i++){
        inversa[i] = frase[cont]; 
    }
    
    for(int cont = 0; cont <= max; cont++){
        frase[cont] = inversa[cont]; 
    }
    
    printf("%s", frase);
    
    return 0;
}