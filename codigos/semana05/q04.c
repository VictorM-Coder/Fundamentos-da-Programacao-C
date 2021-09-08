/*Alguns sistemas geram um identificador numérico para os usuários afim de identifica-los de forma única, como por exemplo a matricula dos alunos e o CPF das pessoas. 

Normalmente esse identificadores possuem regras de formação, ou seja, ele possui um certo formato. 

Implemente um programa que recebe o identificador de um usuário contendo 5 dígitos inteiros e informe se esse identificador respeita a regra ou não. Abaixo temos a regra de formação:

Digamos que os cincos dígitos inteiros são representados pelos: d1 d2 d3 d4 d5. Vocês vão receber esses 5 números inteiros que não necessariamente terão apenas um digito :).

As regras são as seguintes:

d1, d3 e d5 devem ser impar;
d2 e d4 devem ser pares;
d3 = d1 + 4;
d5 = d3 + 2.
Imprima SIM se respeita as regras e NAO caso contrário.

DICA: Crie quatro variáveis booleanas (variáveis flags), uma para cada regra, que irá indicar se a regra é atendida ou não. Verifique cada regra individualmente e depois verifica se as quatros regras são atendidas através das variáveis booleanas.*/
#include <stdio.h>

int main(){
    int d1, d2, d3, d4, d5, cond1 = 0, cond2 = 0, cond3 = 0;
    
    scanf("%d %d %d %d %d", &d1, &d2, &d3, &d4, &d5);
    
    if(d1%2 == 1 && d3%2 == 1 && d5%2 == 1){
        cond1 = 1;
    }
    
    if(d2%2 == 0 && d4%2 == 0){
        cond2 = 1;
    }
    
    if((d3 == d1 + 4) && (d5 == d3 + 2)){
        cond3 = 1;
    }
    
    if(cond1 == 1 && cond2 == 1 && cond3 == 1){
        printf("SIM");
    }else
    printf("NAO");
    
    return 0;
}