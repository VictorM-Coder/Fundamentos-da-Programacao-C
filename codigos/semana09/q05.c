/*Implemente um programa que irá calcular a média dos alunos de um turma com n alunos, com o valor de n informado pelo usuário.

O programa irá receber a nota da AP1 dos alunos e  depois a nota da AP2 dos alunos. O programa irá calcular e imprime a média desses n alunos.

ATENÇÃO: É obrigatório usar três vetores.

Três professor?

Isso três.

Três???.

Exatamente três.

Dois vetores para armazenar as notas das APs, cada vetor representando uma AP, e o terceiro para armazenar a média dos alunos.  

OBS: Use o tipo float para os vetores.

O primeiro valor será a quantidade de números.

Depois será fornecido a nota dos alunos da AP1.

Depois será fornecido a nota dos alunos da AP2.*/
#include <stdio.h>

int main(){
    int rod;
    
    scanf("%d", &rod);
    float ap1[rod];
    float ap2[rod];
    float media[rod];
    
    for(int cont = 0; cont < rod; cont++){
        scanf("%f", &ap1[cont]);
    }
    
    for(int cont = 0; cont < rod; cont++){
        scanf("%f", &ap2[cont]);
    }
    
    for(int cont =0; cont < rod; cont++){
        media[cont] = (ap1[cont] + ap2[cont])/2;
        printf("%.2f ", media[cont]);
    }
    
    return 0;
}