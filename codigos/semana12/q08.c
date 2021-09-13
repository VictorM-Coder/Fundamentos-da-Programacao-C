/*Particionamento de um vetor é dividi-lo em duas ou mais vetores de tal forma que nenhuma desses vetores criados tenham elementos em comum.

Uma partição muito comum de um vetor de inteiros é: dado um número chamado de chave da partição (ou chamado de pivô), crie dois vetores onde o primeiro irá conter todos os elementos menores do que o pivô, e no segundo vetor coloque os elementos maiores ou iguais ao pivô.

Implemente um programa que irá receber um vetor de inteiros e depois o pivô e então particione essa vetor em dois vetores como mostrado anteriores e depois imprima essas dois vetores.

Primeiro imprima o vetor com os elementos menores e na outra linha, imprima o vetor com os elementos maiores ou iguais.

Dentro dos dois vetores, mantenha a ordem relativa dos elementos no vetor de entrada.*/
#include <stdio.h>

int main(){
    int tam, pivo;
    scanf("%d", &tam);
    
    int vet[tam];
    
    for(int cont = 0; cont < tam; cont++){
        scanf("%d", &vet[cont]);
    }
    
    scanf("%d", &pivo);
    int totMa = 0, totMe = 0;
    
    for(int cont = 0; cont < tam; cont++){
        if(pivo <= vet[cont]){
            totMa++;
        }else{
            totMe++;
        }    
    }
    
    int vetMa[totMa], vetMe[totMe];
    
    for(int cont = 0, v1 = 0, v2 = 0; cont < tam; cont++){
        if(pivo > vet[cont]){
            vetMe[v1] = vet[cont];
            v1++;
        }else{
            vetMa[v2] = vet[cont];
            v2++;
        }  
    }
    
    for(int cont = 0; cont < totMe; cont++){
        printf("%d ", vetMe[cont]);
    }
    printf("\n");
    for(int cont = 0; cont < totMa; cont++){
        printf("%d ", vetMa[cont]);
    }
    return 0;
}