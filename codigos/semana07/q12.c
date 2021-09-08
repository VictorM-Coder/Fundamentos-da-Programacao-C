/*Leia do usuário dois valores inteiros, inferior e superior (nesta ordem), e calcule a soma dos valores ímpares na faixa [inferior, ..., superior].*/
#include <stdio.h>

int main(){
    int ini, fim, soma =0;
    scanf("%d %d", &ini, &fim);
    
    for(int cont = ini; cont <= fim; cont++){
        if(cont%2 != 0){
            soma += cont;
        }
    }
    
    printf("%d", soma);
    
    return 0;
}