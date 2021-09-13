/*Implemente um programa que irá receber do usuário n números inteiros e determine o menor e o maior destes números e quantas vezes eles ocorrem. 

Vejamos um exemplo. Vamos receber como valor de n = 6. Em seguida os 6 números inteiros: 9 4 15 28 4 7. O menor e maior valor são 4 e 28, respectivamente. Eles aparecem 2 e 1 vez no vetor.

Imprima essas duas duplas no formato (ocorrência, valor). No exemplo acima deve imprimir: (2,4) (1,28).*/
#include <stdio.h>

int main(){
    int rod, maior, menor, qntMa =0, qntMe =0;
    scanf("%d", &rod);
    int num[rod];
    
    for(int cont = 0; cont < rod; cont++){
        scanf("%d", &num[cont]);
    }//fim for1
        
         
    for(int cont = 0; cont < rod; cont++){
        if(cont == 0){
            maior = num[0];
            menor = num[0];
            qntMa++;
            qntMe++;
            
        }else{
            if(maior < num[cont]){
                maior =  num[cont];
                qntMa = 1;
            }else if(maior == num[cont]){
                qntMa++;
            }
            if(menor > num[cont]){
                menor =  num[cont];
                qntMe = 1;
            }else if(menor == num[cont]){
                qntMe++;
            }
                
        }
    }//fim for2
    
    printf("(%d, %d) (%d, %d)", qntMe, menor, qntMa, maior);
    
    return 0;
}