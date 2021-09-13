/*Somente faça essa questão se você fez a versão: O QUE EU POSSO COMPRAR? VERSÃO 2

Nessa versão, não existe a obrigatoriedade de comprar a quantidade informada de cada produto, pode-se comprar uma quantidade menor, desde que essa quantidade seja a maior possível. Primeiro tentamos comprar toda a quantidade desejada, se não for possível, você tenta comprar uma quantidade menor. Por exemplo, deseja-se comprar 4 itens de um produto de preço 20 reais sendo que temos 55 na carteira. Não é possível comprar os 4 itens desejado e nem 3. É possível comprar 2 itens. Isso será feito para todos os produtos.*/
#include <stdio.h>

int main(){
    //declarações
    int qnt, qntComprada = 0;
    float saldo, gasto =0;
    
    scanf("%d", &qnt);
    float prodPreco[qnt];
    int qntProd[qnt];
    
    for(int cont = 0; cont < qnt; cont++){
        scanf("%f", &prodPreco[cont]);
    }
    
    for(int cont = 0; cont < qnt; cont++){
        scanf("%d", &qntProd[cont]);
    }
    
    scanf("%f", &saldo);
    
    //manipulações
    for(int cont = 0; cont < qnt; cont++){
        float gastoRod = qntProd[cont] * prodPreco[cont];
        if(gastoRod <= saldo){
            saldo -= gastoRod;
            qntComprada += qntProd[cont];
            gasto += gastoRod;
            
        }else{
            for(int c1 = qntProd[cont]; c1 >=1; c1--){
                gastoRod = prodPreco[cont] * c1;
                if(gastoRod <= saldo){
                    saldo -= gastoRod;
                    qntComprada += c1;
                    gasto += gastoRod;
                    break;
                }
            }
        }
           
            
    }//fim for externo
        
    printf("%d %.2f %.2f", qntComprada, gasto, saldo);
    
    return 0;
}