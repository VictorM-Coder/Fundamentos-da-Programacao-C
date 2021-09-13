/*Implemente um programa que irá calcular a média dos alunos de um turma com m alunos, com o valor de m informado pelo usuário. Além disso, a quantidade de provas também será informada, digamos, n provas.

O programa irá receber na mesma linha a quantidade de provas e a quantidade de alunos. Nas próximas linhas, serão fornecidas as notas dos alunos em cada prova.

OBS: Use o tipo float*/
#include <stdio.h>

int main(){
    int provas, alunos;
    
    scanf("%d %d", &provas, &alunos);
    float notas[provas][alunos];
    float media[alunos];
    
   for(int lin =0; lin < provas; lin++){
       for(int col = 0; col < alunos;col++){
           scanf("%f", &notas[lin][col]);
       }
   }
   
   for(int col = 0; col < alunos; col++){
       float aux =0;
       for(int lin =0; lin < provas; lin++){
           aux += notas[lin][col];
       }
       media[col] = aux/provas;
   }
   
   
   for(int cont =0; cont < alunos; cont++){
     printf("%.2f ", media[cont]);
   }
    
    return 0;
}