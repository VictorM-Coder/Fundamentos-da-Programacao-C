/*Somente faça essa questão depois de fazer a questão É VOGAL OU É CONSOANTE?

Implemente um programa que recebe uma letra maiúscula(minúscula ) e converter para minúscula(maiúscula).

Para isso, implemente uma função que recebe um char devolve true se esse char está em maiúscula e outras duas funções, uma que recebe um char e devolve o char convertido para minúscula(maiúscula).

Depois imprima.*/
#include <stdio.h>

int eMaiuscula(char let){
    if(let >= 65 && let <= 90){
        return 1;
    }else{
        return 0;
    }
}

char paraMinuscula(char let){
    return let + 32;
}

char paraMaiuscula(char let){
    return let - 32;
}

int main(){
    char letra;
    scanf("%c", &letra);
    
    if(eMaiuscula(letra)){
        letra = paraMinuscula(letra);
    }else{
        letra = paraMaiuscula(letra);
    }
    
    printf("%c", letra);
    return 0;
}