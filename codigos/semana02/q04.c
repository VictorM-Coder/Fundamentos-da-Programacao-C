/*Em muitas situações, é necessário pegar as informações da data de nascimento e sua idade e coloca-las dentro de uma frase formatada. Por exemplo, suponha que uma pessoa tenha a data de nascimento d/m/y e idade k. Precisamos exibir a seguinte mensagem:

Voce nasceu no dia d do mês m no ano y e hoje tem k anos.

Implemente um programa que faça isso, recebe do usuário a data de nascimento e a idade no formato "d/m/y k", onde temos primeiro a data de nascimento e separado por espaço a idade, e gere a frase.*/
#include <stdio.h>

void main(){
    int dia, mes, ano, idade;
    
    scanf("%d/%d/%d %d", &dia, &mes, &ano, &idade);
    printf("voce nasceu no dia %d do mes %d no ano %d e hoje tem %d anos.", dia, mes, ano, idade);
}