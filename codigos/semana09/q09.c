/*Implemente um programa que recebe dois vetores de inteiros de mesmo tamanho e crie um novo vetor onde os elementos desse novo vetor é soma dos elementos dos dois vetores da seguinte forma: o primeiro elemento do primeiro vetor será somado com o último elemento do segundo vetor, o segundo elemento do primeiro vetor será somado com o penúltimo elemento do segundo vetor, e assim sucessivamente.

Suponha que os dois vetores de entrada sejam v1 e v2 de tamanho n = 10 e soma o vetor resultante. Então:

soma[0] = v1[0] + v2[9]

soma[1] = v1[1] + v2[8]

soma[2] = v1[2] + v2[7]

...

soma[9] = v1[9] + v2[0]

ATENÇÃO: OBRIGATORIAMENTE VC DEVE CRIAR OS TRÊS VETORES, OS DOIS PRIMEIROS PARA ARMAZENAR OS VETORES DA ENTRADA E O TERCEIRO COM O RESULTADO, SÓ AÍ VC VAI IMPRIMIR OS NÚMEROS DO TERCEIRO VETOR.*/
#include <stdio.h>

int main(){
    int rod;
    
    scanf("%d", &rod);
    int vet1[rod], vet2[rod], soma[rod];
    
    for(int cont = 0; cont < rod; cont++){
        scanf("%d", &vet1[cont]);
    }
    
    for(int cont = 0; cont < rod; cont++){
        scanf("%d", &vet2[cont]);
    }
    
    int aux = rod -1;
    for(int cont =0; cont < rod; cont++){
        soma[cont] = vet1[cont] + vet2[aux];
        
        aux--;
        
        printf("%d ", soma[cont]);
    }
    
    
    return 0;
}