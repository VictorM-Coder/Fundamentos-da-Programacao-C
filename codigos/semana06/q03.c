/*As equações do tipo ax² + bx + c = 0, onde a, b e c são coeficientes numéricos pertencentes ao conjunto dos números reais, com a ≠ 0, são denominadas equações do 2º grau. Como toda equação, elas possuem como resultado, um conjunto solução denominado raiz. O diferencial dessas equações em relação às do 1º grau, é que elas podem ter três soluções diferentes de acordo com o valor do discriminante, representado pela letra grega ∆ (delta). Observe:

∆ > 0, a equação possui duas raízes reais e distintas.

∆ = 0, a equação possui raízes reais iguais.

∆ < 0, a equação não possui raízes reais.

A formula do ∆, assim como das raízes é obtida pela fórmula de Bhaskara:



Implemente um programa ira receber os valores a, b e c (todos inteiros), encontre e imprima as raízes dessa equação ou imprima NTR, caso não tenha raízes reais. 

Imprima as raízes na seguinte ordem: primeiro a raiz que é obtida usando o sinal + na formula e depois a raiz que é obtida usando o sinal - na formula. No caso de apenas uma raiz, imprima apenas uma vez.*/
#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c, delta;
    float r1, r2;
    scanf("%d %d %d", &a, &b, &c);
    
    delta = b * b - 4 * a * c;
    
    if(delta < 0){
        printf("NTR");
    }else{
        r1 =  (-1 * b + sqrt(delta))/ (a * 2);
        r2 =  (-1 * b - sqrt(delta))/ (a * 2);
        
        if(delta > 0){
            printf("%.2f %.2f", r1, r2);
        }else{
            printf("%.2f", r1);
        }
    }
    
    return 0;
}