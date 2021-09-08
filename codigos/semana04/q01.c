/*Implemente um programa que irá dizer se um aluno foi aprovado ou não, respeitando as regras atuais da UFC.

O programa irá receber as três notas e calcula a média. Se o valor da média for maior ou igual a 7 ele tá aprovado. Se sua média for menor que 4, ele tá reprovado. Caso contrário, o aluno terá direito a fazer AF.  O programa irá receber o valor da nota da AF. Se sua nota da AF for menor que 4, ele tá reprovado. Caso contrário, calcula-se a média final fazendo a média entre a nota da AF e da primeira média. Se média final for maior ou igual que 5 o aluno da Aprovado, caso contrario reprovado.*/
#include <stdio.h>

int main(){
    float n1, n2, n3, media, af;
    
    scanf("%f %f %f", &n1, &n2, &n3);
    
    media = (n1 + n2 + n3)/3;
    
    if(media >= 7){
        printf("Aprovado");
    } else if(media <= 4){
        printf("Reprovado");
    }else {
        scanf("%f", &af);
        if(af < 4){
            printf("Reprovado");
        }else {
            media = (media + af)/2;
            if(media>=5){
                printf("Aprovado");
            }else{
                printf("Reprovado");
            }
        }
    }
    
    
    return 0;
}