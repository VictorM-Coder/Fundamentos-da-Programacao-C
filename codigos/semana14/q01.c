/*Implemente um programa para soma os elementos de uma matriz.

Seu programa ire receber uma matriz, A , de dimensão n x m. 

A primeira linha da entrada são as dimensões da matriz. As próximas linhas serão os elementos da matriz, onde os elementos estarão por linha.*/
#include <stdio.h>

int main(){
    int m, n, soma =0;
    scanf("%d %d", &n, &m);
    int mat1[n][m], mat2[n][m];
    
    for(int lin = 0; lin < n; lin++){
        for(int col = 0; col < m; col++){
            scanf("%d", &mat1[lin][col]);
        }
    }
    
    for(int lin = 0; lin < n; lin++){
        for(int col = 0; col < m; col++){
            soma += mat1[lin][col];
        }
    }
    
    printf("%d", soma);
    return 0;
}