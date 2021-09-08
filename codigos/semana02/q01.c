/*No Brasil, a unidade de temperatura que utilizamos é o grau Celsius (ºC), diferente dos países de origem inglesa. Nesses países, a unidade usual é o Fahrenheit (ºF).

As análises matemáticas envolvendo situações comparativas entre temperaturas em graus Celsius e temperaturas em Fahrenheit originaram uma expressão algébrica no intuito de conversões de temperatura:



Implemente um um programa que converta graus Celsius (ºC) para Fahrenheit (ºF), e vice-versa. 

O usuário irá fornecer dois valores fracionário onde o primeiro representa o grau em Celsius e o segundo em Fahrenheit.*/
#include <stdio.h>
int main(){
    float c, f;
    scanf("%f", &c);
    scanf("%f", &f);
    
    float convF = (9.0*c)/5.0 + 32;
    float convC = (f - 32.0) * 5/9; 
    
    printf("%.2f C = %.2f F \n", c, convF);
    printf("%.2f F = %.2f C", f, convC);
    
    return 0;
}