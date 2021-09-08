/*Implemente um programa que recebe 11 números inteiro e diga se eles são pares ou impares. (PAR OU IMPAR)

A saída deve ser uma por linha, como mostra os exemplos abaixo.*/
#include <stdio.h>

int main(){
    int ent;
    
    for(int cont =1; cont <=11; cont++){
        scanf("%d", &ent);
        if(ent % 2 == 0){
            printf("Par \n");
        }else{
            printf("Impar \n");
        }
    }
    return 0;
}