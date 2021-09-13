/*Matriz Quadrada é aquela cujo número de linhas é igual ao número de colunas, ou seja, m = n. n é a ordem da matriz quadrada.



Na Matriz Quadrada temos a definição da diagonal principal e secundária (questão SOMA DOS ELEMENTOS DA DIAGONAL SECUNDARIA).

Seja A uma matriz quadrada de ordem n (n x n), os elementos da diagonal principal da matriz A são os elementos A[i][i], para todo i = 0, 1, ..., n - 1, ou seja, são os elemento que estão na linha i e coluna i.



Implemente um programa para somar os elementos da diagonal principal de uma matriz quadrada.

A primeira linha da entrada é a ordem da matriz quadrada. As próximas linhas serão os elementos da matriz, onde os elementos estarão por linha.*/
#include <stdio.h>

int main(){
    int tam, soma = 0;
    scanf("%d", &tam);
    
    int mat[tam][tam];
    
    for(int lin = 0; lin < tam; lin++){
        for(int col = 0; col < tam; col++){
            scanf("%d", &mat[lin][col]);
        }
    }
    
    for(int cont = 0; cont < tam; cont++){
        soma+= mat[cont][cont];
    }
    
    printf("%d", soma);
    return 0;
}