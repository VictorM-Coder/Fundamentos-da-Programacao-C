/*Você deve implementa um programa que recebe uma matriz quadrada nxn e diga se ela é um quadrado mágico ou não.

Dizemos que uma matriz quadrada inteira é um quadrado mágico se a soma dos elementos de cada linha, a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal e secundária tem o mesmo valor.

Saida : "sim" se for quadrado mágico e "nao" caso contrário.*/
#include <stdio.h>

int main(){
    int tam, magica = 1;
    scanf("%d", &tam);
    int mat[tam][tam];
    
    for(int c1 = 0; c1< tam; c1++){
        for(int c2 = 0; c2 < tam; c2++){
            scanf("%d", &mat[c1][c2]);
        }   
    }
    
    int soma_linhas = 0;
    int soma_colunas = 0;
    int soma_dp = 0;
    int soma_ds = 0;
    
    for(int cont = 0; cont<tam; cont++){
        soma_dp += mat[cont][cont];
    }
    
    for(int c1 = 0; c1< tam; c1++){
        int soma_rod = 0;
        for(int c2 = 0; c2 < tam; c2++){
            soma_rod += mat[c1][c2];
        }
           
        if(soma_rod != soma_dp){
            magica = 0;
            break;
        }
    }
    
    if(magica){
        for(int c1 = 0; c1< tam; c1++){
            for(int c2 = 0; c2 < tam; c2++){
                if((c1+c2) == tam-1){
                    soma_ds += mat[c1][c2];
                }
            }   
        }
        
        if(soma_ds != soma_dp){
            magica = 0;
        }
    }
    
    if(magica){
        printf("sim");
    }else{
        printf("nao");
    }
    
    
    
    return 0;
}