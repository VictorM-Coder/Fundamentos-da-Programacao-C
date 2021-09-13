/*Seja A uma matriz quadrada de ordem n, os elementos da diagonal secundária da matriz A são os elementos A[n - 1 - i][i], para todo i = 0, 1, ..., n - 1.



Implemente um programa para soma os elementos da diagonal secundária de uma matriz quadrada.

A primeira linha da entrada são as dimensões da matriz. As próximas linhas serão os elementos da matriz, onde os elementos estarão por linha.*/
#include <stdio.h>

int main(){
    int tam, soma =0;
    scanf("%d", &tam);
    int mat[tam][tam];
    
    for(int lin = 0; lin < tam; lin++){
        for(int col = 0; col < tam; col++){
            scanf("%d", &mat[lin][col]);
        }
    }
    
    for(int lin = 0; lin < tam; lin++){
        for(int col = 0; col < tam; col++){
            if((col + lin) == (tam - 1)){
                soma+= mat[lin][col];
            }
        }
    }
    
    printf("%d",soma);
    
    
    return 0;
}