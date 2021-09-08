/*A CAGECE está promovendo uma campanha de conservação de água, distribuindo cartilhas e promovendo ações demonstrando a importância da água para a vida e para o meio ambiente.

Para incentivar mais ainda a economia de água, a ela alterou os preços de seu fornecimento de forma que, proporcionalmente, aqueles clientes que consumirem menos água paguem menos pelo metro cúbico.

Todo cliente paga mensalmente uma assinatura de R$ 7, que inclui uma franquia de 10 m³ de água. Isto é, para qualquer consumo entre 0 e 10 m³ , o consumidor paga a mesma quantia de R$ 7 reais (note que o valor da assinatura deve ser pago mesmo que o consumidor não tenha consumido água).


Acima de 10 m³ cada metro cúbico subsequente tem um valor diferente, dependendo da faixa de consumo. A CAGECE cobra apenas por quantidades inteiras de metros cúbicos consumidos. A tabela abaixo especifica o preço por metro cúbico para cada faixa de consumo:

Faixa de consumo (m³)   Preço (m³)
até 10                            incluído na franquia
11 a 30                           R$ 1
31 a 100                         R$ 2
101 em diante                 R$ 5

Assim, por exemplo, se o consumo foi de 120 m³ , o valor da conta é:

7 reais da assinatura básica;
20 reais pelo consumo no intervalo 11 - 30 m³;
140 reais pelo consumo no intervalo 31 - 100 m³;
100 reais pelo consumo no intervalo 101 - 120 m³.
Logo o valor total da conta de água é R$ 267.

Implemente um programa que recebe um valor inteiro de água consumido em m3  e calcula o valor da conta de água.*/
#include <stdio.h>

int main(){
    int cons, cont;
    cont = 7;
    
    scanf("%d", &cons);
    
    
    if(cons>10){
        if(cons <= 30){
            cont = (cons - 10) + cont;
        }else if(cons <= 100){
            cont = cont + 20 + (cons-30)*2;
        }else{
            cont = cont + 20 + 140 + (cons-100)*5;
        }
    }
    
    printf("R$ %d", cont);
    
    
    
    return 0;
}