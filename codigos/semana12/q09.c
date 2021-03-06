/*Implemente um programa recebe dois vetores de inteiros ordenados e IMPRIME os valores dos vetores em ordem crescente.

Um vetor de números está ordenado quando o primeiro elemento é menor ou igual ao segundo, e o segundo é menor ou igual ao terceiro, e assim sucessivamente.

[a1, a2, a3, ..., an] esse vetor está ordenado se e somente se, a1 <= a2 <= a3 <= ... <= an

Essa é a chamada ordem crescente.

ATENÇÃO: AQUI SÓ PRECISA IMPRIMIR, NÃO PRECISA GERAR UM VETOR ORDENADO. TOTALMENTE PROIBIDO USAR ALGUM ALGORITMO DE ORDENAÇÃO. USE O FATO DOS VETORES ESTAREM ORDENADOS PARA IMPRIMIR OS VALORES EM ORDEM CRESCENTE.*/
#include <stdio.h>

int main(){
    int tam1, tam2;
    
    scanf("%d", &tam1);
    int vet1[tam1];
    for(int cont = 0; cont < tam1; cont++ ){
        scanf("%d", &vet1[cont]);
    }
    
    scanf("%d", &tam2);
    int vet2[tam2];
    for(int cont = 0; cont < tam2; cont++){
        scanf("%d", &vet2[cont]);
    }
    int ult = 0;
    for(int cont = 0; cont < tam1; cont++){
        for(int c1 = ult; c1< tam2; c1++){
            if(vet1[cont] >= vet2[c1]){
                printf("%d ", vet2[c1]);
                ult = c1 +1;
            }
        }
        printf("%d ", vet1[cont]);
       
    }
    
    for(int cont = 0; cont < tam2; cont++){
        if(vet2[cont] > vet1[tam1 -1]){
            printf("%d ", vet2[cont]);
        }
    }
    
    
    return 0;
}