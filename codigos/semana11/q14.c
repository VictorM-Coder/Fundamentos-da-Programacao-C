/*Implemente um programa que recebe uma frase e uma letra e retorna o números de vezes que essa letra aparece na frase. */
#include <stdio.h>

int main(){
    char frase[100];
    char letra;
    scanf("%[^\n]", frase);
    
    scanf(" %c", &letra);
    
 
    int i = 0;
    int tot = 0;
    
    while(frase[i] != '\0'){
        if(letra == frase[i]){
            tot++;
        }
        i++;
    }
    
    printf("%d", tot);
    
    
    return 0;
}