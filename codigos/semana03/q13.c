/*O Módulo ou valor absoluto de um número real (ou inteiro) é a distância desse número ao zero. Dessa forma, o módulo 10 e -10 é o mesmo e igual a 10, pois essa é a distância deles ao zero. Por isso, dado um número real (inteiro) qualquer, tanto a sua versão negativa ou positiva tem o mesmo módulo.

Assim, podemos o módulo de um número real é calculado seguindo as seguintes regras:
• O módulo ou valor absoluto de um número real é o próprio número, se ele for positivo.
• O módulo ou valor absoluto de um número real será o seu simétrico, se ele for negativo.

O valor simétrico de um número é sua versão de sinal trocado. O simétrico 10 é o -10. O simétrico de -10 é o 10.

Implemente um programa que recebe um número real e imprima seu módulo.*/

#include <stdio.h>
#include <math.h>

int main(){
    float n1;
    
    scanf("%f", &n1);
    n1 = fabs(n1);
    
    printf("%.2f", n1);
    return 0;
}