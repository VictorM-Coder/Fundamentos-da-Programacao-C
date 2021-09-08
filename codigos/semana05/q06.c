/*O valor do ingresso no parque de diversões tem um desconto que depende da idade da criança.

Para criança até 5 anos de idade o desconto será de 20%. Para criança acima de 5 e até 7 anos de idade o desconto é de 15%. Para criança acima de 7 e até 10 anos o desconto é de 5%. Acima disso não tem desconto e paga o valor normal.

Além disso, na compra de mais de um ingresso, o desconto total permitido será de no máximo 15% do valor total sem desconto.

Para uma família de 4 filhos, calcule o valor total que essa família irá gastar com os ingressos.

Será fornecido a idade dos 4 filhos e o preço do ingresso.*/
#include <stdio.h>

int main(){
    int i1, i2, i3, i4;
    float desc1 =0, desc2 =0, desc3 =0, desc4 =0;
    double preco, precoTot = 0;
    
    scanf("%d %d %d %d %lf", &i1, &i2, &i3, &i4, &preco);

    
    if(i1 <= 5){
        desc1 = 0.20;
    }else if(i1 <= 7){
        desc1 = 0.15;
    }else if(i1 <= 10){
        desc1 = 0.05;
    }
    
    
    if(i2 <= 5){
        desc2 = 0.20;
    }else if(i2 <=7){
        desc2 = 0.15;
    }else if(i2 <= 10){
        desc2 = 0.05;
    }
    
    if(i3 <= 5){
        desc3 = 0.20;
    }else if(i3 <=7){
        desc3 = 0.15;
    }else if(i3 <= 10){
        desc3 = 0.05;
    }
    
    if(i4 <= 5){
        desc4 = 0.20;
    }else if(i4 <= 7){
        desc4 = 0.15;
    }else if(i4 <= 10){
        desc4 = 0.05;
    }
    

   double descTot = preco * desc1 + preco * desc2 + preco * desc3 + preco * desc4;//desconto total está errado...
   double des15 = (4 * preco) * 0.15;
  

    if(descTot > des15){
        
        precoTot = 4 * preco - des15;
    }else{
        precoTot = 4 * preco - descTot;
    }
    
    

    
    printf("%.2lf", precoTot);
    
    return 0;
}