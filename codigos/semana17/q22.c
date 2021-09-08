/*Sabemos que para encontrar a soma dos elementos de um vetor de inteiros, podemos usar facilmente um for ou while. Mas observe que podemos definir essa operação de forma recursiva.

Primeiro vamos definir o conceito de sub-vetor ou sub-cadeia. Um sub-vetor de um vetor, é uma parte desse vetor onde os elementos estão sequência no vetor. Por exemplo, um vetor de tamanho 20, os elementos das posições 2 até 10 formam um sub-vetor desse vetor. Assim como os elementos das posições 1 até 15. Já os elementos das posições 4, 8, 11, 15 e 18 não formam um sub-vetor pois não estão em sequência no vetor.

Repare que um sub-vetor pode ser definido pelos índices inicial e final. Dado um vetor vet de tamanho n > 20, podemos definir os seguintes sub-vetores: vet[1,...,10], vet[7,...,19], vet[1,...,n-1].

Dado o vetor vet de tamanho n, a soma dos elementos desse vetor pode ser definido como: vet[n] + vet[1,...,n-1]. 

Vamos definir a função recursiva que recebe como parâmetro um sub-vetor e observando que vet = vet[1,...,n], então

soma(vet[1,...,n]) = vet[n] + soma(vet[1,...,n-1]).

soma(vet[1,...,n-1]) = vet[n-1] + soma(vet[1,...,n-2]).

soma(vet[1,...,n-2]) = vet[n-2] + soma(vet[1,...,n-3]).

...

soma(vet[1,...,1]) = vet[1]  //Caso Base

Portanto, temos uma definição recursiva para a soma dos elementos de um vetor.

Implemente a seguinte função que recebe como parâmetro um vetor de inteiros e seu tamanho e calcula de forma recursiva a soma dos elementos desse vetor.

int soma_vetor(int vet[], int n);*/
#include <stdio.h>

int soma_vetor(int vet[], int tam){
    if(tam >=0){
        return vet[tam] + soma_vetor(vet, tam-1);
    }else{
        return 0;
    }
}

int main(){
    int tam;
    scanf("%d", &tam);
    int vet[tam];
    
    for(int cont = 0; cont <tam; cont++){
        scanf("%d", &vet[cont]);
    }
    
    printf("%d", soma_vetor(vet, tam-1));
    return 0;
}