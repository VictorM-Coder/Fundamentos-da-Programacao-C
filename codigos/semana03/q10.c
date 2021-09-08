/*mplemente um programa que calcula a idade de uma pessoa. Seu programa irá receber a data de nascimento da pessoa e a data atual. As datas fornecidas estão no formato dd/MM/yyyy. Esse formato de data significa dia/mês/ano, onde o dia e o mês terão dois dígitos e o ano 4. Imprima a idade da pessoa.

ATENÇÃO: Só conte anos completos. Exemplo: A data de nascimento é no dia 16/11/1980, a data atual é 20/07/2017, logo sua idade é 36 e não 37 pois ele não completou o último ano.

A primeira data será do nascimento e a segunda a data atual.*/

#include <stdio.h>

int main(){
    
    int ano, mes, dia, anoH, mesH, diaH;
    
    scanf("%d/%d/%d", &dia, &mes, &ano);
    scanf("%d/%d/%d", &diaH, &mesH, &anoH);
    
        if(mesH > mes){
           printf("%d", anoH - ano);
            
            
        }else if(mesH == mes){
           if(diaH == dia){
               printf("%d", anoH - ano);
           }else if(diaH > dia){
                printf("%d", anoH - ano);
           }else{
                printf("%d", anoH - ano -1);
           }
           
        }else{
             printf("%d", anoH - ano - 1);
        }
    
    return 0;
}