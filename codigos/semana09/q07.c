/*Implemente um programa que calcula o valor maluco que o professor Fabio criou.

O Valor Maluco não serve pra nada apenas para complicar a vida dos alunos.

O programa irá receber uma lista de inteiros de tamanho n com n sendo par e o Valor Maluco é calculado da seguinte forma, supondo que n seja 20:

S = (A[0] - A[19])^2 + (A[1] - A[18])...

Implemente um programa que recebe uma lista de n números inteiros e calcule o valor maluco. Depois imprima.*/
#include <stdio.h>
#include <math.h>

int main(){
    int rod,tot=0;
    scanf("%d", &rod);
    int vet[rod];
    
    for(int cont =0; cont < rod; cont++){
        scanf("%d", &vet[cont]);
    }
    
    for(int cont = 0; cont < (rod - cont -1); cont++){
        tot += pow((vet[cont] - vet[rod - cont -1]),2);
    }
    
    printf("%d", tot);
    
    return 0;
}