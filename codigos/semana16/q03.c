/*Defina um tipo estruturado para representar um circulo do plano cartesiano. Um circulo é definido por um ponto e um raio. Use o tipo Ponto da Questão DISTÂNCIA ENTRE DOIS PONTOS e o raio será um float. Esse tipo terá nome de Circulo.

Use também a função que calcula a distância dessa questão.

Implemente um programa que recebe três 5 floats, sendo que os três primeiro representam o ponto e o raio do circulo e os dois últimos um ponto que desejamos saber se está contido dentro do círculo.

Para isso, implemente uma função que recebe como parâmetro o Circulo e um Ponto, retorne true se o ponto está contido no circulo ou fase caso contrário.

Imprima (na main) 1 ou 0.*/
#include <stdio.h>
#include <math.h>

struct ponto{
  float x, y;  
};

struct circulo{
  float raio; 
  struct ponto coord;
};

float calcular_distancia(struct ponto p1, struct ponto p2){
    float distancia = sqrt((pow((p2.x - p1.x), 2)) + (pow((p2.y - p1.y), 2)));
    return distancia;
}

int esta_contido(struct circulo c1, struct ponto p1){
    if(calcular_distancia(c1.coord, p1) > c1.raio){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    struct circulo circu;
    struct ponto p1;
    
    scanf("%f %f %f", &circu.coord.x, &circu.coord.y, &circu.raio);
    scanf("%f %f", &p1.x, &p1.y);
    
    int resul = esta_contido(circu, p1);
    
    printf("%d", resul);
    
    return 0;
}