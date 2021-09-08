/*Em teoria dos números, a sequência de Padovan é a sequência de inteiros P(n) definida[1] pelos valores iniciais

P(0) = 1, P(1) = 1, P(2) = 1.

e a relação de recorrência

P(n) = P(n - 2) + P(n - 3)

Os primeiros valores de P(n) são

1, 1, 1, 2, 2, 3, 4, 5, 7, 9, 12, 16, 21, 28, 37, 49, 65, 86, 114, 151, 200, 265, ...



Fonte: https://pt.wikipedia.org/wiki/Sequ%C3%AAncia_de_Padovan

Implemente uma função recursiva que receba um número n e retorne o P(n) de Padovan.*/
#include <stdio.h>

int calcular_padovan(int n){
    int ret;
    if(n == 0 || n == 1 || n == 2){
        return 1;
    }else{
        ret = calcular_padovan(n - 2) + calcular_padovan(n -3);
        return ret;
    }
}

int main(){
    int num;
    scanf("%d", &num);
    int saida = calcular_padovan(num);
    printf("%d", saida);1
    
    return 0;
}