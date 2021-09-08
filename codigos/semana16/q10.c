/*Implemente um programa que recebe um vetor de inteiro de tamanho n. 

Posteriormente, será necessário adicionar novos números nesse vetor, mas na alocação estática, não é possível expandir o tamanho do vetor, você teria que criar um novo vetor com o novo tamanho. Logo, seria outra variável.

Na alocação dinâmica, também não é possível expandir seu tamanho, mas como estamos manuseando ponteiros, podemos alocar dinamicamente novo vetor, mas com o mesmo ponteiro.

Então, no vetor de tamanho n recebido, armazene alocando dinamicamente.

Depois, seu programa irá receber outros m números inteiros.

Aloque um novo vetor de tamanho n+m e copie os n primeiros números para esse novo vetor e depois armazene os m números no mesmo vetor. Depois libere o primeiro vetor e faça o ponteiro do primeiro vetor apontar para o novo.

Depois imprima esse novo vetor.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int tam1; 
    scanf("%d", &tam1);
    
    int *vet1 = (int*) malloc(tam1*sizeof(int));
    
    for(int cont = 0; cont < tam1; cont++){
        scanf("%d", &vet1[cont]);
    }
    
    int tam2;
    scanf("%d", &tam2);
    
    int *vet2 = (int*)malloc((tam1+tam2)*sizeof(int));
    for(int cont = 0; cont < tam1; cont++){
        vet2[cont] = vet1[cont];
    }
    
    for(int cont = tam1; cont <= tam1-1 + tam2; cont++){
        scanf("%d", &vet2[cont]);
    }
    //liberar
    free(vet1);
    vet1 = vet2;
    //imprimir
    for(int cont = 0; cont < tam1+tam2; cont++){
        printf("%d ", vet1[cont]);
    }
    
    free(vet1);
    return 0;
}