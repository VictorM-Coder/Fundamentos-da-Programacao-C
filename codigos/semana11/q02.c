/*Implemente um programa que recebe uma sequência de inteiros positivos e some esses números. Essa sequência será finalizado com um número negativo, que não deve ser somado.

Não será informado a quantidade de números fornecidos.

Deve-se usar While.*/
#include <stdio.h>

int main(){
    int soma = 0;
    
    int ent =0;
    while(ent >= 0){
        soma+= ent;
        scanf("%d", &ent);
    }
    
    printf("%d", soma);
    return 0;
}