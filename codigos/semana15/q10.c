/*Implemente uma função que recebe 4 números inteiros como parâmetros e retorna o maior deles.*/
#include <stdio.h>

int maior(int vet[]){
    int maior = vet[0];
    
    for(int c = 1; c < 4; c++){
        if(maior < vet[c]){
            maior = vet[c];
        }
    }
    return maior;
}
int main(){
    int vet[4];
    
    for(int cont = 0; cont< 4; cont++){
        scanf("%d", &vet[cont]);
    }
    
    int saida = maior(vet);
    
    printf("%d", saida);
    return 0;
}