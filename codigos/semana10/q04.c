/*Implemente um programa que recebe dois conjuntos de inteiros e imprime Iguais se os dois conjuntos são iguais ou Diferentes caso contrário. 

Iremos armazenar um conjunto em um vetor, portanto, o programa irá receber o tamanho do primeiro conjunto e depois os elementos que pertencem ao conjunto. Depois irá receber o tamanho do segundo conjunto e os elementos que pertencem ao conjunto.

ATENÇÃO: Esses vetores são conjuntos, portanto, dois conjuntos são iguais se possuem os mesmos elementos, independente de sua posição no vetor. Além disso, dois conjuntos de tamanhos distintos podem serem iguais, pois no conjunto pode ter elementos repetidos. Por exemplo, {2, 9, 4, 2, 4} e {9, 4, 2} são dois conjuntos iguais.*/
#include <stdio.h>

int main(){
    int r1, r2, igual = 1;
    scanf("%d", &r1);
    int vet1[r1];
    
    for(int c1 = 0; c1 < r1; c1++){
        scanf("%d", &vet1[c1]);
    }
    
    scanf("%d", &r2);
    int vet2[r2];
    
    for(int c1 = 0; c1 < r2; c1++){
        scanf("%d", &vet2[c1]);
    }
    
    //checagem
    for(int c1 = 0; c1 < r1; c1++){
        int totIgual = 0;
        for(int c2 = 0; c2 < r2; c2++){
            
            if(vet1[c1] == vet2[c2]){
                totIgual =1;
            }
        }//fim for interno
        
        if(totIgual == 0){
            igual = 0;
            break;
        }   
    }//fim for externo
    
    if(igual != 0){
        for(int c2 = 0; c2 < r2; c2++){
        int totIgual = 0;
        for(int c1 = 0; c1 < r1; c1++){
            
            if(vet1[c1] == vet2[c2]){
                totIgual =1;
            }
        }//fim for interno
        
        if(totIgual == 0){
            igual = 0;
            break;
        }   
    }//fim for externo
        
    }
    
    
    if(igual){
        printf("Iguais");
    }else{
        printf("Diferentes");
    }
    
    return 0;
}