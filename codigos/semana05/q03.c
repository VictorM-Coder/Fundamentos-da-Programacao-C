/*O Professor Fabio irá utilizar um método não muito usual para avaliar os alunos da turma de FUP.

Teremos 3 notas. Nas seguintes situações o aluno estará aprovado:

1 - Se a média das 3 notas for maior ou igual a 7 o aluno está aprovado. 

2 - Se a média é maior que 5 e sua terceira nota for maior ou igual a 7.

3 - Se a diferença entre a maior nota e a menor nota for menor ou igual a 3.

Caso contrário o aluno já estará reprovado.

Implemente um programa que recebe as três notas do aluno e imprima Aprovado se o aluno foi aprovado ou Reprovado.*/
#include <stdio.h>

int main(){
    float n1, n2, n3, media, maior, menor;
    
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (n1 + n2 + n3)/3;
    
    if(n1 >= n2 && n1 >= n3){
        maior = n1;
    }else if(n2 > n1 && n2 >= n3){
        maior = n2;
    }else{
        maior = n3;
    }
    
    if(n1 <= n2 && n1 <= n3){
        menor = n1;
    }else if(n2 < n1 && n2 <= n3){
        menor =n2;
    }else{
        menor = n3;
    }
    
    
    if((media >= 7) || ((media >= 5) && (n3 >=7)) || (maior - menor <= 3)){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }
    return 0;
}