/*Implemente um programa que recebe um número inteiro n e imprime o n-ésimo número da Sequência de Fibonacci.

Os números de Fibonacci são, portanto, os números que compõem a seguinte sequência:

1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, ... 

Em termos matemáticos, a sequência é definida recursivamente pela fórmula abaixo:

Fn = Fn-1 +Fn-2 ,com valores iniciais F1 = 1 e F2 =1.*/

#include <stdio.h>

int fibo(int n){
     int ret;
  
      if (n == 1) {
        return(1);
      }
      
      if (n == 2) {
        return(1);
      }
      
      ret = fibo(n-1) + fibo(n-2);
      return(ret);
    }

int main(){
    int num;
    scanf("%d", &num);
    
    printf("%d", fibo(num));
    
    
    return 0;
}
