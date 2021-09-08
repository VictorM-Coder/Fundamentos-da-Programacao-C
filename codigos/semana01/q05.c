/*No Brasil, a unidade de temperatura que utilizamos é o grau Celsius (ºC), diferente dos países de origem inglesa. Nesses países, a unidade usual é o Fahrenheit (ºF).

As análises matemáticas envolvendo situações comparativas entre temperaturas em graus Celsius e temperaturas em Fahrenheit originaram uma expressão algébrica no intuito de conversões de temperatura:



Implemente um programa que recebe a temperatura em graus Celsius e converte para Fahrenheit. O valor fornecido será fracionário. */
#include <stdio.h>
int main(){
    float c, f;
    
    scanf("%f", &c);
    f = (c * 9)/5 + 32;
    
    printf("%f", f);
    
    
    return 0;
}