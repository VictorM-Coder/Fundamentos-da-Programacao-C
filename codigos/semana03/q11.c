/*A classificação do SAE (2012) classifica as famílias de acordo com a renda familiar. A renda familiar é o total da renda das pessoas que moram na mesma casa. Abaixo temos essa classificação de acordo com a renda familiar:

Classificação do governo (SAE)
Grupo	Renda familiar
Extremamente pobre	Até R$ 324
Pobre	Até R$ 648
Vulneravel	Até R$ 1.164
Baixa classe media	Até R$ 1.764
Media classe media	Até R$ 2.564
Alta classe media	Até R$ 4.076
Baixa classe alta	Até R$ 9.920
Alta classe alta	Acima de R$ 9.920
ATENÇÃO: Esses valores e grupos podem esta defasados. Não encontrei os atuais. O importante aqui é a programação. Fonte: http://g1.globo.com/economia/seu-dinheiro/noticia/2013/08/veja-diferencas-entre-conceitos-que-definem-classes-sociais-no-brasil.html

Implemente um programa que recebe a renda familiar e imprime a classe social segundo o SAE.*/
#include <stdio.h>

int main(){
    float re;
    
    scanf("%f", &re);
    
    if(re <= 324){
        printf("Extremamente pobre");
        
    }else if(re <= 648){
        printf("Pobre");
    
        
    }else if(re <=1164){
        printf("Vulneravel");
        
    }else if(re <= 1764){
        printf("Baixa classe media");
        
    }else if(re <=2564){
        printf("Media classe media");
        
    }else if(re <= 4076){
        printf("Alta classe media");
        
    }else if(re <=9920){
        printf("Baixa classe alta");
    }
    else{
        printf("Alta classe alta");
    }
    
    return 0;
}