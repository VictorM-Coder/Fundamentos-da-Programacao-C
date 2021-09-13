/*Implemente um programa que recebe o primeiro elemento e a razão de uma PG, e depois o valor n. Deve-se calcular qual é o n-ésimo termo dessa PG.

Para isso, implemente uma função que recebe as informações da PG e retorna o n-ésimo termo. 

Implemente também uma função para calcular a potência.*/
#include <stdio.h>

double potencia(double base, double expo){
    double saida = base;
    for(int cont = 1; cont < expo; cont++){
        saida *= base;
    }
    
    return saida;
}

double NtermoPg(double n1, double razao, double n){
    double saida = n1 * potencia(razao,(n-1));
    return saida;
}
int main(){
    double ele1, razao, n;
    scanf("%lf %lf %lf", &ele1, &razao, &n);
    
    double ret = NtermoPg(ele1, razao, n);
    
    printf("%.0lf", ret);
    return 0;
}