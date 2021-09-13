/*A operação de multiplicação de uma matriz por um escalar é definido da seguinte forma. Dado uma matriz A, de dimensão n x m e depois um escalar (número) alfa. Você deve criar uma terceira matriz C de dimensão n x m, onde B = alfa*A. Ou seja, B[i][j] = alfa*A[i][j], para todo i = 0, 1, ..., n - 1 e para todo j = 0, 1, ..., m - 1.

Implemente a operação algébrica de multiplicação de uma matriz por um escalar. 

A primeira linha da entrada são as dimensões da matriz. As próximas linhas serão os elementos da matriz, onde os elementos estarão por linha. E por fim, o escalar.*/
#include <stdio.h>

int main(){
    int n, m, alfa;
    scanf("%d %d", &n, &m);
    int mat1[n][m], multi[n][m];
    
    for(int lin = 0; lin < n; lin++){
        for(int col = 0; col < m; col++){
            scanf("%d", &mat1[lin][col]);
        }
    }
    scanf("%d", &alfa);
    
    for(int lin = 0; lin < n; lin++){
        for(int col = 0; col < m; col++){
            multi[lin][col] = mat1[lin][col] * alfa;
        }
    }
    
    for(int lin = 0; lin < n; lin++){
        for(int col = 0; col < m; col++){
            printf("%d ", multi[lin][col]);
        }
        printf("\n");
    }
    
    return 0;
}