/*Implemente um programa que recebe dois vetores de inteiros de mesmo tamanho (não precisa verificar se realmente as duas listas tem o mesmo tamanho, suponha que sim) e crie um novo vetor onde os elementos desse novo vetor é soma dos elementos dos dois vetores, posição a posição. Ou seja, o primeiro elemento desse novo vetor será a soma dos primeiros elementos dos dois vetores. O segundo elemento do novo vetor será a soma dos segundos elementos dos dois vetores. E assim sucessivamente.

ATENÇÃO: OBRIGATORIAMENTE VC DEVE CRIAR OS TRÊS VETORES, OS DOIS PRIMEIROS PARA ARMAZENAR OS VETORES DA ENTRADA E O TERCEIRO COM O RESULTADO, SÓ AÍ VC VAI IMPRIMIR OS NÚMEROS DO TERCEIRO VETOR.*/
#include <stdio.h>

int main(){
    int rod;
    
    scanf("%d", &rod);
    
    int vet1[rod];
    int vet2[rod];
    int vetSoma[rod];
    
    for(int cont =0; cont < rod; cont++){
        scanf("%d", &vet1[cont]);
    }
    
    for(int cont =0; cont < rod; cont++){
        scanf("%d", &vet2[cont]);
    }
    
    for(int cont =0; cont < rod; cont++){
        vetSoma[cont] = vet1[cont] + vet2[cont];
        printf("%d ", vetSoma[cont]);
    }
    
    
    return 0;
}