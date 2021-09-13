/*Implemente uma função que recebe um float como parâmetro e retorna outro float contendo a parte fracionária do parâmetro.

A parte fracionária terá no máximo 5 casas decimais*/
#include <stdio.h>

float fracio(float ent){
    int tot = ent;
    
    return ent - tot;
}
int main(){
    float num;
    scanf("%f", &num);
    
    float saida = fracio(num);
    printf("%.5f", saida);
    return 0;
}