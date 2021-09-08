/*Motivação
Um atirador de elite estava atirando a 400 metros de distância em em um papel milimetrado. Para calcular a imprecisão da arma, ele dava dois tiros e media a distância entre eles. Como ele não tinha régua, ele pegou os pontos no plano cartesiano e a fórmula da distância entre os pontos.

Ação
Dada a fórmula da distância entre dois pontos e os valores x e y de cada ponto, imprima a distância entre os pontos com duas casas decimais.



Entrada:
Coordenada X e coordenada Y do primeiro ponto.
Coordenada X e coordenada Y do segundo ponto.
Saída:
A distância entre os pontos com duas casas decimais.*/
#include <stdio.h>
#include <math.h>

void main(){
    float xa, xb, ya, yb;
    scanf("%f %f", &xa, &ya);
    scanf("%f %f", &xb, &yb);
    
    float dist = sqrt((pow(xb - xa, 2)) + (pow(yb - ya, 2)));
    
    printf("%.2f",dist);
}