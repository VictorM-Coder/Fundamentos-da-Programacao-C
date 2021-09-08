/*Desejamos inverter os elementos em um vetor. Inverter um vetor é trocar de posição o primeiro elemento com o último, o segundo com o penúltimo e assim sucessivamente. Por exemplo, o vetor cet = [5, 8, 7, 1, 6] depois que invertemos fica vet = [6, 1, 7, 8, 5].

Dado o vetor vet de tamanho n, podemos inverter os elementos desse vetor de forma recursiva. Vamos visualizar o vetor como sub-vetor, ou seja, com sua posição inicial e final.

Dado o sub-vetor vet[1, ..., n], vamos inverter os elementos da posição 1 com a n. Depois vamos inverter o sub-vetor vet[2,..., n-1].

Dado o sub-vetor vet[2, ..., n-1], vamos inverter os elementos da posição 2 com a n-1. Depois vamos inverter o sub-vetor vet[3,..., n-2].

E assim sucessivamente.

Implemente a seguinte função que recebe como parâmetro um vetor de inteiros e seus índices inicial e final e de forma recursiva, inverte esse vetor.

int invertendo_vetor(int vet[], int ini, int fim);*/
#include <stdio.h>

int invertendo_vetor(int vet[], int ini, int fim){
    if(fim > ini){
        int n1 = vet[ini];
        int nx = vet[fim];
        
        vet[ini] = nx;
        vet[fim] = n1;
        
        invertendo_vetor(vet, ++ini, --fim);
    }
    
    return 1;
}
int main(){
    int tam;
    scanf("%d", &tam);
    int vet[tam];
    
    for(int cont = 0; cont < tam; cont++){
        scanf("%d", &vet[cont]);
    }
    
    invertendo_vetor(vet, 0, tam-1);
    
    for(int cont = 0; cont < tam; cont++){
        printf("%d ", vet[cont]);
    }
    
    return 0;
}