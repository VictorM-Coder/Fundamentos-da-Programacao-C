/*Suponha a situação que uma pessoa recebe uma lista com o preço e a quantidade de três produtos que ela deve comprar. Ela recebe uma certa quantia em dinheiro que dar para comprar todos os produtos. Ela quer saber o quanto vai sobrar, pois o troco é dela. :)

Implemente um programa que receba primeiramente a quantidade que precisa ser compradas dos produtos e depois os preços dos três produtos, e por fim a quantia em dinheiro que a pessoa tem para comprar. Você deve imprimir quanto sobrou.*/
#include <stdio.h>

void main(){
    
    int valor1, valor2, valor3;
    float qnt1, qnt2, qnt3, entrada;
    
    scanf("%d %d %d", &valor1, &valor2, &valor3);
    scanf("%f %f %f", &qnt1, &qnt2, &qnt3);
    scanf("%f", &entrada);
    
    float troco = entrada - (valor1 * qnt1 + valor2 * qnt2 + valor3 * qnt3);
    
    printf("%.2f", troco);
    
}