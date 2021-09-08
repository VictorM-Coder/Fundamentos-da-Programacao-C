//Implemente um programa que recebe um número inteiro e imprima SIM caso ele é múltiplo de 7.
#include <stdio.h>

void main(){
    int ent;
    
    scanf("%d", &ent);
    
    if(ent%7 == 0){
        printf("SIM");
    }
}