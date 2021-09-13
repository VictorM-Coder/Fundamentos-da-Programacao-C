/*Implemente um programa que recebe o primeiro elemento e a razão de uma PA, e depois o valor n. Deve-se calcular a soma dos primeiros n termos dessa PA.

Para isso, use a função da questão anterior (copie e cole aqui) e implemente outra função recebe o primeiro e n-ésimo termo da PA e a quantidade de elementos e retorne o valor da soma.

Imprima o primeiro e o n-ésimo elemento da PA e a soma com duas casas decimais.*/
#include <stdio.h>

int nTermo(int n1, int razao, int n){
    int ret = n1 + (razao * (n-1));
    
    return ret;
}

float somaPa(int ele1, int n, int eleN){
    float ret = ((ele1 + eleN) * n)/2;
    
    return ret;
}

int main(){
    int ele1, razao, n, eleN;
    
    scanf("%d %d %d", &ele1, &razao, &n);
    eleN = nTermo(ele1, razao, n);
    
    float soma = somaPa(ele1, n, eleN);
    
    printf("%d %d %.2f", ele1, eleN, soma);
    
    return 0;
}