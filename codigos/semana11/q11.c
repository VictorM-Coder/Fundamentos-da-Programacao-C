/*Somente faça essa questão se você fez a versão: O QUE EU POSSO COMPRAR?

Nessa versão, além dos preços dos produtos, teremos a quantidade de deseja-se comprar de cada produto. Você receberá os preços dos produtos da cesta básica na ordem de prioridade, ou seja, os primeiros produtos tem maior prioridade do que os demais.  Depois irá receber as quantidades que deseja-se comprar de cada produto da cesta básica e por fim, receberá o valor que uma pessoa tem na carteira.

De cada produto da cesta básica, ou ele compra a quantidade informada ou não compra nenhum daquele produto.

Você deve dizer a quantidade de produtos que o trabalhador pode comprar, o valor total que ele irá gastar e quanto sobrou na carteira.

Crie dois vetores, o primeiro para armazenar os preços dos produtos e o segundo a quantidade dos produtos. O primeiro preço informado assim como a primeira quantidade informada são do primeiro produto. O segundo preço informado assim como a segunda quantidade informada são do segundo produto.  E assim sucessivamente.

A primeira entrada será a quantidade de produtos. Depois os preços desses produtos, depois a quantidade desejada dos produtos e por fim o valor na carteira*/
#include <stdio.h>

int main(){
    //recebendo valores
    int tam;
    int qntComprada = 0;
    float gasto = 0, saldo;
    
    scanf("%d", &tam);
    float precoProd[tam];
    int qntProd[tam];
    
    for(int cont = 0; cont < tam; cont++){
        scanf("%f", &precoProd[cont]);
    }
    
    for(int cont = 0; cont < tam; cont++){
        scanf("%d", &qntProd[cont]);
    }
    
    scanf("%f", &saldo);
    
    //métodos
    for(int cont = 0; cont < tam; cont++){
        float gastoRod = precoProd[cont] * qntProd[cont];
        if(gastoRod <= saldo){
            saldo -= gastoRod;
            qntComprada += qntProd[cont];
            gasto += gastoRod;
            
        }//fim if
    }//fim for
    
    printf("%d %.2f %.2f", qntComprada, gasto, saldo);
    
    return 0;
}