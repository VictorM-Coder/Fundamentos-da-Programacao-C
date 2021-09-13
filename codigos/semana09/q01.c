/*Implemente um programa que irá receber do usuário a quantidade de alunos de uma turma e depois a nota de cada aluno. Seu programa deve calcular a média da turma e contar quantos alunos obtiveram nota maior ou igual que a média da turma. Seu programa deve imprimir a quantidade de alunos com nota maior que a média e depois a média da turma com duas casas decimais.

OBS: Use o tipo float para os vetores.*/
#include <stdio.h>

int main(){
    int rod, qntMa =0;
    float tot =0;
    float media;
    
    scanf("%d", &rod);
    float nota[rod];
    
    for(int cont = 0; cont < rod; cont++){
        scanf("%f", &nota[cont]);
        tot += nota[cont];
    }
    media = tot/rod;
    
    for(int cont = 0; cont < rod; cont++){
        if(nota[cont] >= media){
            qntMa++;
        }
    }
    
    printf("%d %.2f", qntMa, media);
    
    
    
    return 0;
}