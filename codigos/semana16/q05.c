/*Considere o seguinte tipo estruturado Aluno que deve ser usado em seu programa:

typedef struct{
      char nome[100];
      float notas[3];
      float media;
}Aluno;

Seu programa irá receber o nome e as três notas dos alunos. Armazene em um vetor do tipo Aluno. Depois irá receber o valor da média da universidade.

Depois calcule a média de cada aluno e armazene no campo media do tipo Aluno.

Imprima o nome dos alunos que foram aprovados, ou seja, os alunos que a média das notas é maior ou igual a média da universidade.*/
#include <stdio.h>

typedef struct{
    char nome[100];
    float notas[3];
    float media;
}Aluno;


void calcular_media(Aluno alu[], int tam){
    
    for(int cont = 0; cont < tam; cont++){
        float media = (alu[cont].notas[0] + alu[cont].notas[1] + alu[cont].notas[2])/3;
        alu[cont].media = media;
    }
}

int main(){
    int tam;
    float media_uni;
    scanf("%d", &tam);
    Aluno aluno[tam];
    
    for(int cont = 0; cont < tam; cont++){
        scanf(" %[^\n]", aluno[cont].nome);
        scanf("%f %f %f", &aluno[cont].notas[0], &aluno[cont].notas[1], &aluno[cont].notas[2]);
    }
    
    scanf("%f", &media_uni);
    calcular_media(aluno, tam);
    
    for(int cont = 0; cont < tam; cont++){
        if(aluno[cont].media >= media_uni){
            int aux = 0;
            while(aluno[cont].nome[aux] != '\0'){
                printf("%c", aluno[cont].nome[aux]);
                aux++;
            }
            printf("\n");
        }
    }
    
    return 0;
}