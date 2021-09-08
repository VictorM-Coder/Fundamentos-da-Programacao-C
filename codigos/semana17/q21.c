/*Implemente um programa que recebe uma matriz de ordem nxm e um inteiro entre 1 e n, correspondendo uma linha da matriz, e depois imprime todos os elementos dessa linha.*/
#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int mat[n][m];
    
    for(int c1 = 0; c1 < n; c1++){
        for(int c2 = 0; c2< m; c2++){
            scanf("%d", &mat[c1][c2]);
        }
    }
    
    int linha;
    scanf("%d", &linha);
    linha--;
    
    for(int cont = 0; cont < m; cont++){
        printf("%d ", mat[linha][cont]);
    }
    
    return 0;
}