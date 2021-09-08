/*Implemente um programa que recebe um vetor de tamanho n alocado dinamicamente e depois incrementa os valores pares.

Imprima esse vetor e depois libere da memoria.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int tam;
    scanf("%d", &tam);
    
    int *vet = (int*) malloc(tam*sizeof(int));
    
    for(int cont = 0; cont < tam; cont++){
        scanf("%d", &vet[cont]);
    }
    
    for(int cont = 0; cont < tam; cont++){
        if(vet[cont]%2==0){
            vet[cont]++;
        }
    }
    
    for(int cont = 0; cont < tam; cont++){
        printf("%d ", vet[cont]);
    }
    free(vet);
    return 0;
}