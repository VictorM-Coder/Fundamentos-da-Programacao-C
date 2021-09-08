/*Use o tipo estruturado que você definiu para representar uma Circulo na questão PONTO DENTRO DO CÍRCULO.

Implemente um programa que recebe n círculos e calcula a área desses n círculos e imprime a maior área. 

Armazene os n círculos em um vetor do tipo Circulo. 

Implemente uma função que recebe como parâmetro o vetor de Circulo e retorna a maior área.

Imprima (na main) a maior área retornada pela função.

OBS: Use como valor de pi = 3.14*/
#include <stdio.h>

struct ponto{
  float x, y;  
};

struct circulo{
  float raio; 
  struct ponto coord;
};

float area_circulo(struct circulo c1){
    float area = c1.raio * c1.raio * 3.14;
    return area;
}

float maior_area(struct circulo circu[], int tam){
    float maior = area_circulo(circu[0]);
    
    for(int cont = 1; cont < tam; cont++){
        float area_rod = area_circulo(circu[cont]);
        
        if(maior < area_rod){
            maior = area_rod;
        }
    }
    
    return maior;
}

int main(){
    int n;
    scanf("%d", &n);
    
    struct circulo circulos[n];
    
    for(int cont = 0; cont < n; cont++){
        scanf("%f %f %f", &circulos[cont].coord.x, &circulos[cont].coord.y, &circulos[cont].raio);
    }
    
    float resul =  maior_area(circulos, n);
    printf("%.2f", resul);
    return 0;
}