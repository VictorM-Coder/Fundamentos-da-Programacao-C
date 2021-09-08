/*Implemente um programa que recebe uma matriz de ordem nxm e depois encontre o maior elemento da matriz. 

Imprima a posição do maior elemento da matriz, ou seja, sua linha e coluna.*/

#include <stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int matriz[n][m];
    
    for(int c1 = 0; c1 < n; c1++){
        for(int c2 = 0; c2 < m; c2++){
            scanf("%d", &matriz[c1][c2]);
        }
    }
    
    int l_maior = 0, c_maior = 0;
    
    for(int c1 = 0; c1 < n; c1++){
        for(int c2 = 0; c2 < m; c2++){
            if(matriz[l_maior][c_maior] < matriz[c1][c2]){
                
                l_maior = c1;
                c_maior = c2;
            }
        }
    }
    
    printf("%d %d", l_maior+1, c_maior+1);
    return 0;
}