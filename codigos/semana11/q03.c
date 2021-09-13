/*Somente faça essa questão se fez a questão SOMA DE SEQUÊNCIA DE INTEIROS.

Nesta versão, a garantido que teremos um número positivo na sequência.
Deve-se usar Do-While.*/
#include <stdio.h>

int main(){
    int soma=0, ent =0;
    
    while(ent >=0){
        soma+= ent;
        scanf("%d", &ent);
   
    }
    
    printf("%d", soma);
    
    
    return 0;
}