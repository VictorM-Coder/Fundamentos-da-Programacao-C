/*Na cadeira de Matemática Díscreta, o professor irá apresentar o teorema da divisão. Ele diz o seguinte:

Teorema (Algoritmo da Divisão): Seja n um inteiro qualquer e d um inteiro positivo, existe um único par de inteiros q e r com 0 ≤ r < d tais que n = d*q + r.

Em outras palavras, dado dois inteiros positivos, por exemplo, 115 e 15, podemos escrever 115 = 15*7 + 10, onde 7 e 10 são o quociente e o resto da divisão de 115 por 15.

Implemente um programa que receba dois inteiros positivos e calcule o valor do quociente e resto da divisão do primeiro pelo segundo número.*/
#include <stdio.h>

void main(){
    int n1, n2, quo, resto;
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    quo = n1/n2;
    resto = n1%n2;
    
    printf("%d %d", quo, resto);
}