/*A criação de uma solução de ácido fraco é obtido pela seguinte formula: [H3O+]3 + Ka[H3O+]2 -(KaCa + Kw)[H3O+] - KwKa.

Onde:

H3O+: é a concentração hidrogeniônica;

Ka: é a constante de dissociação do ácido;

Kw: o produto iônico da água.

Ca: é a concentração do ácido;

Implemente um programa que recebe os valores das propriedades listadas acima, na mesma ordem e calcule a formula para saber a quantidade de ácido fraco a ser produzido.*/
#include <stdio.h>
#include <math.h>

void main(){
    double h3, ka, kw, ca;
    scanf("%lf", &h3);
    scanf("%lf", &ka);
    scanf("%lf", &kw);
    scanf("%lf", &ca);
    
    double saida = pow(h3,3) + ka * (pow(h3,2)) - (ka * ca + kw) * h3 - kw * ka;
    printf("%lf", saida);
}