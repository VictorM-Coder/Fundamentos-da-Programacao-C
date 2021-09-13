/*Faça um programa que receba dois vetores de inteiros de mesmo tamanho e troque os elementos entre os dois vetores de índices pares, depois imprima os vetores modificados. 

ATENÇÃO: Você somente pode imprimir depois de fazer as modificações no vetor.

OBS: Considere o índice 0 como sendo par.*/
#include <stdio.h>

int main(){
    int rod;
    
    scanf("%d", &rod);
    
    int vet1[rod];
    int vet2[rod];
    
    for(int cont =0; cont < rod; cont++){
        scanf("%d", &vet1[cont]);
    }
    
    for(int cont =0; cont < rod; cont++){
        scanf("%d", &vet2[cont]);
        
        if(cont%2==0){
            int au = vet1[cont];
            vet1[cont] = vet2[cont];
            vet2[cont] = au;
        }
    }
    
    for(int cont = 0; cont < rod; cont++){
        printf("%d ", vet1[cont]);
    }
    printf("/n");
    for(int cont = 0; cont < rod; cont++){
        printf("%d ", vet2[cont]);
    }
    
    return 0;
}