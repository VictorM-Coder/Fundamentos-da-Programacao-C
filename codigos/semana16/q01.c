/*Defina um tipo estruturado para representar um ponto do plano cartesiano, ou seja, contém dois dados, coordenadas x e y, todas float, de nome Ponto

Implemente um programa que recebe dois pontos distintos e calcule a distância entre esses dois pontos.

Para isso, implemente uma função que recebe dois pontos, do tipo Ponto, e calcule a distância entre eles.

Imprima (na main) a distância com duas casas decimais.*/
#include <stdio.h>
#include <math.h>

typedef struct{
    float x, y;    
} Ponto;

float calcular_distancia(Ponto p1, Ponto p2){
    float distancia = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    return distancia;
}
int main(){
    Ponto p1, p2;
    
    scanf("%f %f", &p1.x, &p1.y);
    scanf("%f %f", &p2.x, &p2.y);
    
    float saida = calcular_distancia(p1, p2);
    printf("%.2f", saida);
    return 0;
}