/*Implemente um programa que recebe uma matriz quadrada de dimensão n x n e informe se ela é uma matriz diagonal inferior ou não.

Numa matriz diagonal inferior, todos os elementos acima da diagonal principal são iguais a 0. Os elementos da diagonal principal ou abaixo dela podem assumir valores quaisquer.

Saida : sim se for diagonal inferior e nao caso contrário.*/
#include <stdio.h>

int main(){
    int tam;
    int inferior = 1;
    scanf("%d", &tam);
    int mat[tam][tam];
    
    for(int c1 =0; c1< tam; c1++){
        for(int c2 =0; c2 < tam; c2++){
            scanf("%d", &mat[c1][c2]);
        }   
    }
    
    for(int c1 =0; c1< tam; c1++){
        for(int c2 =0; c2 < tam; c2++){
            if(c1 < c2 && mat[c1][c2] != 0){
                inferior = 0;
            }
        }   
    }
    
    
    if(inferior){
        printf("sim");
    }else{
        printf("nao");
    }
    return 0;
}