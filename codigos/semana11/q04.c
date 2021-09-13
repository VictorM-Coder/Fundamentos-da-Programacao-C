/*Implemente um programa que receba um valor inteiro N que é a quantidade de casos de teste que vem a seguir.
Cada caso de teste consiste de dois inteiros X e Y. Você deve apresentar a soma dos Y ímpares consecutivos a partir de X, inclusive o próprio X se ele for ímpar. Por exemplo: para a entrada 4 5, a saída deve ser 45, que é equivalente à: 5 + 7 + 9 + 11 + 13, para a entrada 7 4, a saída deve ser 40, que é equivalente à: 7 + 9 + 11 + 13.

No final imprima também a maior e a menor soma, e a média destas duas últimas somas.

Deve-se usar While ou Do-While.*/
#include <stdio.h>

int main(){
    int n, maior, menor;
    float media;
    scanf("%d", &n);
    int soma[n];
    
    for(int cont = 0; cont < n; cont++){
        int x, y;
        soma[cont] =0;
        scanf("%d %d", &x, &y);
        
        int max, min;
        if(x%2==0){
            max = x + 1 + ((y-1)*2); 
            min = x +1;
        }else{
            max = x + ((y-1) * 2);
            min = x;
        }
       

        while(min <= max){
            soma[cont] += min;
            min+=2;
        }
     
    }
    
    
    for(int cont =0; cont < n; cont++){
        if(cont ==0){
            maior = soma[cont];
            menor = soma[cont];
        }else{
            if(maior < soma[cont]){
                maior = soma[cont];
            }
            if(menor > soma[cont]){
                menor = soma[cont];
            }
        }
        printf("%d\n", soma[cont]);
    }
    
    media = (menor + maior)/2.0;
    
    
    
    printf("%d\n %d\n %.2f", maior, menor, media);
    
    
    
    
    return 0;
}