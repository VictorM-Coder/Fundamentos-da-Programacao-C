/*Defina um tipo estruturado para representar uma data com o dia, mês e ano, de nome Data.

Usando a definição acima, crie uma função que receba duas datas, do tipo Data, e retorne 1 se as duas datas são iguais e 0 caso contrário. 

Na main, receba o resultado da função e imprima Iguais ou Diferentes, se o retorno da função for 0 ou 1.

OBS: Não precisa verificar se uma data é válida, considere que seja válida.*/
#include <stdio.h>

typedef struct{
    int dia, mes, ano;
}Data;

int data_e_igual(Data d1, Data d2){
    if(d1.dia == d2.dia && d1.mes == d2.mes && d1.ano == d2.ano){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    Data d1, d2;
    scanf("%d/%d/%d", &d1.dia, &d1.mes, &d1.ano);
    scanf("%d/%d/%d", &d2.dia, &d2.mes, &d2.ano);
    
    if(data_e_igual(d1, d2)){
        printf("Iguais");
    }else{
        printf("Diferentes");
    }
    
    return 0;
}