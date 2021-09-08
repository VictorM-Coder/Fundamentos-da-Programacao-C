/*Em combinatória os números de Catalan formam uma sequência de números naturais que ocorrem em vários problemas de contagem, frequentemente envolvendo objetos definidos recursivamente. O nome é uma referência ao matemático belga Eugène Charles Catalan (1814–1894).

Implemente uma função recursiva que receba um número n e retorne o C(n) de Catalan.*/

#include <stdio.h>

int calcular_catalan(int n){
    int ret;
    if(n == 0){
        return 1;
    }else{
        ret = (2.0 * (2*n-1))/(n+1) * calcular_catalan(n-1);
        return ret;
    }
}

int main(){
    int num;
    scanf("%d", &num);
    
    int saida = calcular_catalan(num);
    printf("%d", saida);
    
    
    return 0;
}