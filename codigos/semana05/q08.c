/*Uma loja fornece desconto de acordo com o tipo de produto, sendo três tipos:

Tipo       Desconto

1               R$ 8

2               R$ 15

3               R$ 18

Além do desconto ela permite parcelar o valor após o desconto, sendo que o valor das parcelas devem ser inteiros, com isso uma parcela deverá ter valor maior que as demais. A loja aplicar a regra de ser a última parcela que tem maior valor.

Exemplo 1: Produto no valor de 19 do tipo 1 em 5 parcelas

Valor após o desconto = 11. As primeiras parcelas serão de R$ 2 e última parcela de R$ 3.

Exemplo 2: Produto no valor de 111 do tipo 2 em 5 parcelas

Valor após o desconto = 96. As primeiras parcelas de R$ 19 e última parcela de R$ 20.

Em caso de compra a vista, o valor das primeiras e última parcelas devem iguais.

Caso com o desconto já dar para pagar o produto, ele será de graça e deve ser exibido tudo zero.

Implemente um programa que calcula o valor após o desconto, o valor da primeira parcela e da última. 

Na primeira linha da entrada serão fornecidos, na seguinte ordem: "Valor Produto" "Tipo do Produto" "Qtd Parcelas". 

O programa deve imprimir, na seguinte ordem: "Valor após desconto" "Valor primeira parcela" "Valor última parcela"*/
#include <stdio.h>

int main(){
    int desc, ent, parc, valor =0, parc1 =0, parcF =0;
    
    scanf("%d %d %d", &ent, &desc, &parc);
    
    if(desc == 1){
        desc = 8;
    }else if(desc == 2){
        desc = 15;
    }else{
        desc = 18;
    }
    
    if(desc < ent){
        valor = ent - desc;
        parc1 = valor/parc;
        parcF = (valor%parc) + (valor/parc);
    }
    
    
    
    printf("%d %d %d",valor, parc1, parcF);
    
    return 0;
}