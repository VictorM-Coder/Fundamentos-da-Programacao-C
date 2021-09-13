/*Implemente uma função que recebe os coeficientes de uma equação do segundo grau e realiza o calculo de suas raízes.

Deve-se utilizar a Fórmula de Bhaskara: http://mundoeducacao.bol.uol.com.br/matematica/tres-passos-para-resolver-uma-equacao-segundo-grau.htm

Sua função terá a seguinte estrutura:

int calcularRaizes(int a, int b, int c, float *raiz1, float *raiz2)

O retorno da função será true (1) se a equação tem solução ou false (0) se não tiver. Os ponteiros floats irão armazenar as raízes da equação, caso tenha.*/
#include <stdio.h>
#include <math.h>

int calcularRaiz(int a, int b, int c, float *raiz1, float *raiz2){
    int delta = (b*b) - 4 * a * c;
    
    if(delta >= 0){
        *raiz1 = (-1 * b +  sqrt(delta))/2;
        *raiz2 = (-1 * b -  sqrt(delta))/2;
        return 1;
    }else{
        return 0;
    }
    
   
}
int main(){
    int a, b, c, isFun;
    float r1 = 0, r2 = 0;
    float *raiz1 = &r1;
    float *raiz2 = &r2;
    
    scanf("%d %d %d", &a, &b, &c);
    
    isFun = calcularRaiz(a, b, c, raiz1, raiz2);
    
    printf("%d %.2f %.2f", isFun, r1, r2);
    return 0;
}