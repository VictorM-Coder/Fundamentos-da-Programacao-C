/*Existem dois tipos de aplicações financeiras, as pré-fixadas e pós-fixadas. As pré-fixadas já sabemos a priori sua rentabilidade ao final da aplicação, mas nas pós-fixadas não.

Além da rentabilidade, algumas aplicações cobram a taxa de saída que é aplicado somente no valor da rentabilidade da aplicação ao final do mesmo.

Por exemplo, você aplicou R$ 1.000,00 numa aplicação pré-fixada que rende 8% ao final da aplicação com uma taxa de saída de 1,5%. A rentabilidade dessa aplicação será de 1000*8% = 80. A taxa de saída será de 80*1,5% = 1,2. Portanto, no final, você vair receber de rendimentos 80 - 1,2 = R$ 78,8.

Defina um novo tipo de variável para representar uma aplicação pré-fixada que contem o percentual de rentabilidade e a taxa de saída.

Implemente um programa que vai receber os dados de n aplicações financeira pré-fixadas (armazene no vetor) e o valor a ser aplicado. Encontre a aplicação que vai retornar o maior rendimento e imprima esse valor.*/
#include <stdio.h>

typedef struct{
    float rent, taxa;
}pre_fixada;

float retorno(pre_fixada pf, float valor){
    float ret = valor *pf.rent/100;
    ret -= ret*pf.taxa/100;
    return ret;
}

float maior_retorno(pre_fixada pf[], int tam, float valor){
    float maior = retorno(pf[0], valor);
    
    for(int cont = 1; cont< tam; cont++){
        float rod = retorno(pf[cont], valor);
        if(rod > maior){
            maior = rod;
        }
    }
    
    return maior;
}


int main(){
    int tam;
    float valor_tot;
    scanf("%d", &tam);
    
    pre_fixada pf[tam];
    
    for(int cont =0; cont < tam; cont++){
        scanf("%f %f", &pf[cont].rent, &pf[cont].taxa);
    }
    scanf("%f", &valor_tot);
    
    float saida = maior_retorno(pf, tam, valor_tot);
    printf("%.2f", saida);
    
    return 0;
}