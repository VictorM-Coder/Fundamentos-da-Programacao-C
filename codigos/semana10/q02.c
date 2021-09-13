/*Dado um vetor de inteiros, conte quantos números repetidos aparecem nesse vetor.

Por exemplo, um  vetor de tamanho 14: 

3 8 17 5 4 17 2 17 8 9 7 15 15 9, tem 6 números repetidos. O 8 repete-se uma vez. O 17 três vezes (CUIDADO, observe que comparei o 17 do índice 2, com o 17 dos índices 5 e 7, e depois comparei o 17 do índice 5 com o do índice 7, totalizando três repetições). O 9 repete-se duas vezes e o 15 duas vezes. No total temos 6 repetições.*/
#include <stdio.h>

int main(){
    int r1, iguais = 0;
    //leitura
    
    scanf("%d", &r1);
    int vet1[r1];
    
    for(int c1 = 0; c1 < r1; c1++){
        scanf("%d", &vet1[c1]);
    }
    
    for(int c1 = 0; c1 < r1; c1++){
        for(int c2 =(c1 +1); c2 < r1; c2++){
            if(vet1[c1] ==vet1[c2]){
                iguais++;
            }
        }
    }
    
    printf("%d", iguais);
    
    
    return 0;
}