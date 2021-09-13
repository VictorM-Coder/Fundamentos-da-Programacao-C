/*Seja A uma matriz quadrada de ordem n. A matriz A é dita simétrica se A[i][j] = A[j][i], para todo i = 0, 1, ..., n - 1 e para todo j = 0, 1, ..., m - 1. Isto é, elementos em lados opostos da diagonal principal da matriz devem ser iguais.



Implemente um programa para verificar se uma dada matriz quadrada é simétrica.

A primeira linha da entrada são as dimensões da matriz. As próximas linhas serão os elementos da matriz, onde os elementos estarão por linha.*/
#include <stdio.h>

int main(){
    int tam, igual = 1;
    scanf("%d", &tam);
    
    int mat[tam][tam];
    
    for(int lin = 0; lin < tam; lin++){
        for(int col = 0; col < tam; col++){
            scanf("%d", &mat[lin][col]);
        }
    }
    
    for(int lin = 0; lin < tam; lin++){
        for(int col = 0; col < tam; col++){
            if(mat[lin][col] != mat[col][lin]){
                igual = 0;
                break;
            }
            if(!igual){
                break;
            }
        }
    }
    
    if(igual){
        printf("Sim");
    }else{
        printf("Nao");
    }
    return 0;
}