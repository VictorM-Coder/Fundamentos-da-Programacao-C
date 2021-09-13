/*Uma das operações mais comuns sobre matrizes, é soma. Dados duas matrizes, A e B, de mesma dimensão n x m (a soma só está definida para matrizes de mesma dimensões), a soma será uma terceira matriz C de dimensão n x m, onde C = A + B. Ou seja, C[i][j] = A[i][j] + B[i][j], para todo i = 0, 1, ..., n - 1 e para todo j = 0, 1, ..., m - 1.

Implemente a operação algébrica de soma de duas matrizes. 

A primeira linha da entrada são a dimensão das duas matrizes. As próximas linhas serão as matrizes, onde os elementos estarão por linha.

Entrada:
2 3            //Número de linhas e colunas das matrizes A e B
4 5 8         //Elementos da primeira linha de A
1 2 5         //Elementos da segunda linha de A
4 2 3         //Elementos da primeira linha de B
5 1 6         //Elementos da segunda linha de B

Saída:
8 7 11        //Elementos da primeira linha de C
6 3 11        //Elementos da segunda linha de C*/
#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d", &m, &n);
    int mat1[m][n], mat2[m][n], soma[m][n];
    
    for(int lin = 0; lin < m; lin++){
        for(int col = 0; col < n; col++){
            scanf("%d", &mat1[lin][col]);
        }
    }
    
    for(int lin = 0; lin < m; lin++){
        for(int col = 0; col < n; col++){
            scanf("%d", &mat2[lin][col]);
        }
    }
    
    for(int lin = 0; lin < m; lin++){
        for(int col = 0; col < n; col++){
            soma[lin][col] = mat1[lin][col] + mat2[lin][col];
        }
    }
    
    for(int lin = 0; lin < m; lin++){
        for(int col = 0; col < n; col++){
            printf("%d ", soma[lin][col]);
        }
        printf("\n");
    }
    
    return 0;
}