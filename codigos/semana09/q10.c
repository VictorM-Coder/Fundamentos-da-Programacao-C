/*Implemente um programa que recebe dois vetores de inteiros de tamanhos possivelmente diferentes e crie um novo vetor onde os elementos desse novo vetor é a união dos elementos do primeiro vetor com o segundo.

Vamos com um exemplo. O primeiro vetor tem tamanho 6: [8, 5, 7, 5, 16, 25]. O segundo vetor tem tamanho 4: [78, 5, 25, 49]. O novo vetor obtido pela união dos dois será: [8, 5, 7, 5, 16, 25, 78, 5, 25, 49].

Você deve imprimir o tamanho desse vetor união e da outra linha, os seus elementos.

ATENÇÃO: OBRIGATORIAMENTE VC DEVE CRIAR OS TRÊS VETORES, OS DOIS PRIMEIROS PARA ARMAZENAR OS VETORES DA ENTRADA E O TERCEIRO COM O RESULTADO, SÓ AÍ VC VAI IMPRIMIR OS NÚMEROS DO TERCEIRO VETOR.*/
#include <stdio.h>

int main(){
    int rod1, rod2;
    
    scanf("%d", &rod1);
    int vet1[rod1];
    
    for(int cont = 0; cont < rod1; cont++){
        scanf("%d", &vet1[cont]);
        
       
    }
    
    scanf("%d", &rod2);
    int vet2[rod2];
    for(int cont = 0; cont < rod2; cont++){
        scanf("%d", &vet2[cont]);
        
    }
    
    int vet3[rod1 + rod2];
    for(int cont = 0; cont < (rod1 + rod2); cont++){
         if(cont < rod1){
            vet3[cont] = vet1[cont];    
         }else{
            vet3[cont] = vet2[cont - rod1];    
         }
    }
    printf("%d \n ", rod1 + rod2);
    for(int cont = 0; cont < (rod1 + rod2); cont++){
         printf("%d ", vet3[cont]);
    }
    
    
    
    return 0;
}