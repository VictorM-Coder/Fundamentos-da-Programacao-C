/*Somente faça essa questão se você fez a questão SOMA PAR, DECREMENTA IMPAR.

Implemente um programa que ira receber N números do usuário, sendo que o valor de N será informado pelo mesmo.

Você deve calcular o somatório usando a seguinte regra:

1 - Se o número for par, acrescente no somatório;

2 - Se o número for impar:

Se for o primeiro número da sequência, não faz nada;
A partir do segundo número, deve calcular o módulo da diferença desse número pelo número anterior (independente se esse número anterior for par ou impar) e subtrair o valor do módulo no somatório.
Imprima o valor do somatório.

Todos os números serão inteiros.*/
#include <stdio.h>

int main(){
    int rod, ant, tot =0;
    
    scanf("%d", &rod);
    
    for(int cont = 1; cont <= rod; cont++){
        int ent;
        
        scanf("%d", &ent);
        
        if(ent%2==0){
            tot += ent;
        }else{
            if(cont != 1){
                int mod = ent - ant;
                mod = (mod <0)? mod * -1: mod;
                tot -= mod;
            }//fim if interno
        }//fim if principal
        
        ant = ent;
    }//fim for
    
    printf("%d", tot);
    return 0;
}