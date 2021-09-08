/*Você deve implementa um programa que recebe uma matriz quadrada nxn e diga se ela é uma matriz identidade ou não

Dizemos que uma matriz quadrada é uma matriz identidade se todos os elementos da diagonal principal são iguais a 1 e todos os elementos fora da diagonal principal são zero.

Saida : sim se for identidade e nao caso contrário.*/

#include <stdio.h>

int verificar_identidade(int tam, int mat[][tam]){
    
    for(int c1 = 0; c1 < tam; c1++){
        for(int c2 = 0; c2 < tam; c2++){
            if(c1 == c2){
                if(mat[c1][c2] != 1)
                    return 0;
            }else{
                if(mat[c1][c2] != 0){
                    return 0;
                }
            }
        }
    }
    
    return 1;
}

int main(){
    int tam;
    scanf("%d", &tam);
    int mat[tam][tam];
    
    for(int c1 = 0; c1 < tam; c1++){
        for(int c2 = 0; c2 < tam; c2++){
            scanf("%d", &mat[c1][c2]);
        }
    }
    
    if(verificar_identidade(tam, mat)){
        printf("sim");
    }else{
        printf("nao");
    }
    
    return 0;
}