/*Implemente um programa que recebe o primeiro elemento e a razão de uma PA, e depois o valor n. Deve-se calcular qual é o n-ésimo termo dessa PA.

Para isso, implemente uma função que recebe as informações da PA e retorna o n-ésimo termo.*/
#include <stdio.h>

int nTermo(int n1, int razao, int n){
    int ret = n1 + (razao * (n-1));
    
    return ret;
}
int main(){
    int p1, ra, n, ret;
    scanf("%d %d %d", &p1, &ra, &n);
    
    ret = nTermo(p1, ra, n);
    
    printf("%d", ret);
    return 0;
}