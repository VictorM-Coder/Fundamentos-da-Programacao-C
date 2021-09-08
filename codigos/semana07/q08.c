/*Nessa nova versão, a quantidade de números não será fixa em 21 (como na versão 1), mas será informada incialmente, ou seja, será dinâmica. Seja n essa quantidade de números.

Implemente um programa que recebe n números inteiros e calcule e imprima a média desses n números.

O primeiro número fornecido na entrada será o valor de n, depois será fornecidos os n números.*/
#include <stdio.h>

int main(){
    
    int rod;
    float soma =0;
    scanf("%d", &rod);
    
    for(int cont = 1; cont <= rod; cont++){
        float ent;
        scanf("%f", &ent);
        
        soma +=  ent;
    }//fim for
    
    float media = soma/rod;
    
    printf("%.2f", media);
    
    return 0;
}