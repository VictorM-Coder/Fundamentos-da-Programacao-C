/*Os juros compostos são recorrentes as varias situações nas nossas vidas, como nos investimentos em aplicações financeiras. O juros pode ser um aliado ou um vilão. É importante dominar os fatores que influenciam o seu cálculo, que são o capital, a taxa de juros, o tempo e o montante.

Capital (C): é o primeiro valor investido ou valor inicial da aplicação;
Juros (J): é o valor de compensação para o rendimento da aplicação, ou seja, o quanto você recebe ao final da aplicação;
Taxa de juros (i): é a porcentagem ganha em cima do capital a cada instante;
Tempo (t): é o tempo em que o capital ficará aplicado. Pode ser em dias, meses, etc;
Montante (M): é o valor final da aplicação.
O  juros é obtido subtraindo o montante pelo capital: J = M - C.

A formula para calcular o montante é a seguinte: M = C(1 + i)t.

Implemente um programa que recebe o capital, taxa de juros (em porcentagem) e tempo e calcule o quanto essa aplicação vai render no final.*/
#include <stdio.h>
#include <math.h>
void main(){
    double capital, taxa, tempo;

    scanf("%lf %lf %lf", &capital, &taxa, &tempo);
    //pow(base, expoente)
    taxa = taxa/100;
    double mont = capital * (pow(1 + taxa, tempo));
    double juros = mont - capital;
    double rend =  (100*mont/capital) - 100;
    
    
    
    double rendP = taxa * 100 * (tempo - 1);
    printf("A aplicacao rendeu %.2lf reais que equivale a um rendimento percentual de %.2lf%%.", juros, rend);
}