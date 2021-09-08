/*Use o tipo estruturado e a função da questão DATAS VÁLIDA (STRUCT).

Implemente uma função que recebe um vetor do tipo Data e retorna a quantidade de datas válidas desse vetor.

Na função main, receba as datas e armazene no vetor alocado dinamicamente e depois chame a função.*/

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

int calcular_datas_validas(Data d1[], int tam){
    int validos = 0;
    for(int cont = 0; cont < tam; cont++){
        if(verificar_data(d1[cont])){
            validos++;
        }
    }
    
    return validos;
}

int main(){
    int tam;
    scanf("%d", &tam);
    Data data[tam];
    
    for(int cont = 0; cont  < tam; cont++){
        scanf("%d/%d/%d", &data[cont].dia, &data[cont].mes, &data[cont].ano);
    }
    
    int tot = calcular_datas_validas(data, tam);
    printf("%d", tot);
    return 0;
}