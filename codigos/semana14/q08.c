/*Seja A uma matriz de dimensão n x m. A matriz transposta de A é uma matriz T, de dimensão m x n, tal que, T[j][i] = A[i][j], para todo i = 0, 1, ..., n - 1 e para todo j = 0, 1, ..., m - 1.


Implemente um programa para encontrar a matriz transposta de uma matriz de ordem n x m.

Você obrigatoriamente precisa criar outra matriz e só depois imprimir.

A primeira linha da entrada são as dimensões da matriz. As próximas linhas serão os elementos da matriz, onde os elementos estarão por linha.*/
#include <stdio.h>

int main(){
    int  n, m;
    scanf("%d %d", &n, &m);
    int mat[n][m], trans[m][n];
    
   for(int lin; lin < n; lin++){
       for(int col = 0; col < m;col++){
           scanf("%d", &mat[lin][col]);
       }
   }
    
   for(int lin; lin < n; lin++){
       for(int col = 0; col < m;col++){
           trans[col][lin] = mat[lin][col];
       }
   }
   
   
   for(int lin; lin < m; lin++){
       for(int col = 0; col < n;col++){
            printf("%d ", trans[lin][col]);
       }
       printf("\n");
   }
    return 0;
}