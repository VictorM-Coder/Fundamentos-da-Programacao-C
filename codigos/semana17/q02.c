/*Implemente uma função que recebe uma data do tipo Data e retorna verdadeiro se a data é válida e falso caso contrário. Veja o seu código na questão [2,5 Pontos] VERIFICAR DATA VÁLIDA.

Na função main, receba uma data e armazene numa variável do tipo Data e chame a função.

A entrada de dados (scanf) e a impressão (printf) somente pode ser feita na main.*/

#include <stdio.h>

typedef struct{
    int dia, mes, ano;
}Data;

int verificar_data(Data d1){
    int valido = 1;
    
    if((d1.dia > 31 || d1.dia <= 0) || (d1.mes > 12 || d1.mes <=0)){//verificação geral
        valido = 0;
        
    }else if(d1.mes == 2){//verificação de fevereiro
        
        if(d1.dia == 29){
            if(!((d1.ano%400==0) || ((d1.ano%4==0) && d1.ano%100!=0))){
                valido = 0;
            }
        }else if(d1.dia >= 28){
            valido = 0;
        }
        
    }else{//verificação dos outros meses
        if((d1.mes == 4 || d1.mes == 6 || d1.mes == 9 || d1.mes == 11) && (d1.dia > 30)){
            valido = 0;
        }
    }
    
    return valido;
}

int main(){
    Data d1;
    scanf("%d/%d/%d", &d1.dia, &d1.mes, &d1.ano);
    
    printf("%d", verificar_data(d1));
    return 0;
}