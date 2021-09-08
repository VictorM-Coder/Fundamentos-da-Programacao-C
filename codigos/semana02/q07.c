/*Muitos reservatórios de água são no formato de semiesfera. Portanto, seu volume é em função do raio da semiesfera, da sua altura e do valor de pi considerado. Observe que o valor de pi possui quantidade de casas decimais infinito, mas nos cálculos onde ele aparece utiliza-se com algumas casas decimais. Por exemplo,  3.14 ou 3.141592653589793.



A formula do volume de um reservatórios de água semiesférico é dado por:
Divide-se o valor de pi por 3. Multiplica-se o resultado pelo quadrado da altura. Depois multiplica por três vezes o raio menos a altura.

Implemente um programa que recebe a altura, raio e o valor de pi considerado e calcule o volume desse reservatório. Tanto a altura como o raio terão sempre duas casas decimais. Já o valor de pi terá varias casas decimais.*/
#include <stdio.h>
#include <math.h>

void main(){
    float altura, raio, pi;
    
    scanf("%f %f %f", &altura, &raio, &pi);
    
    float volume = pi/3;
    volume *= pow(altura, 2);
    volume *= 3 * raio - altura;
    
    printf("%.2f", volume);
    
}