/*A função int potencia(int base, int expoente) é a função potencia, ou seja, devolve o baseexpoente.

Sabemos que podemos facilmente implementar essa função usando laço, seja for ou while. Mas aqui, implemente essa função de forma recursiva.

Observe que an = a*a*a*a*a*a...a = a*an-1. Portanto, podemos definir a função potencia de forma recursiva.

Por definição a0 = 1.*/
#include <stdio.h>

int potencia(int base, int expo){
    int ret;
    if(expo == 0){
        return 1;
    }else{
        ret = base * potencia(base, expo-1);
    }
}

int main(){
    int base, expo;
    scanf("%d %d", &base, &expo);
    int saida = potencia(base, expo);
    
    printf("%d", saida);
    
    return 0;
}