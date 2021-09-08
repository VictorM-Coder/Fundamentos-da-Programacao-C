/*Implemente um programa que ira receber N números do usuário, sendo que o valor de N será informado pelo mesmo.

Você deve calcular o somatório usando a seguinte regra:

1 - Se o número for par some no somatório;

2 - Se o número for impar decrementa no somatório.

Imprima o valor do somatório.

Todos os números serão inteiros.*/
#include <stdio.h>

int main(){
    int rod, tot =0;
    scanf("%d", &rod);
    
    
    for(int cont =1; cont <= rod; cont++){
        int ent;
        scanf("%d", &ent);
        
        if(ent%2 == 0){
            tot += ent;
        }else{
            tot -= ent;
        }//fim if
    }//fim for
    
    printf("%d", tot);
    
    
    return 0;
}