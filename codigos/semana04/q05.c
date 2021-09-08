/*Antes de autorizar um empréstimo, as instituições financeiras avaliam se o possível cliente é um bom pagador ou não. Muitas instituições utilizam o chamado score de crédito que é um sistema de pontuação para diferenciar clientes com maior e menor risco de não pagamento.

Umas das pontuações é a Serasa Score da empresa Serasa, porém algumas instituições formulam a sua pontuação própria ou combinam vários critérios com base nos dados pessoais do consumidor, o histórico de pagamentos, o relacionamento financeiro com empresas, entre outros.

No Serasa Score, os pontos vão de 0 a 1.000 pontos, sendo que até 300 pontos há alto risco de inadimplência, entre 300 e 700 o risco é médio e baixo acima de 700 pontos.

Os critérios utilizados serão os seguintes:

Se possui todos os dados cadastrais atualizados, então ganha 100 pontos;
Se tem vínculo empregatício, então ganha 200 pontos;
Se tem o nome limpo, então ganha 200 pontos.
Se possui imóveis e outros bens, a pontuação é da seguinte forma: Carro (10 pontos), Casa (40 pontos), Apartamento (40 pontos). Isso para cada itens que ele possui. 
Esse critério leva em conta o valor da renda e do empréstimo. Vamos considerar que não será cobrado juros. Se o valor do empréstimo for até duas vezes o valor da renda, ganha 200 pontos. Caso contrário, se for até três vezes a renda, ganha 100 pontos. Caso contrário, se o valor até quatro vezes a renda, ganhar 50 pontos.
Por fim, se o valor da parcela for superior a 30% da renda mensal, o empréstimo não deve ser concedido e a pontuação deve ser 0.
Implemente um programa que recebe todos os dados da pessoa e calcule a pontuação no score de crédito.

Na primeira linha, você irá receber as respostas dos critérios de 1 até 4, com S para sim e N para não.

Na segunda linha será fornecido os valores da renda mensal, do empréstimo e a quantidade de parcelas.

Na próxima linha será fornecidos as quantidades de carros, casas e apartamentos caso a resposta do critério 4 seja S.

Imprima a pontuação obtida*/
#include <stdio.h>

int main(){
    char dadoCad, vincEm, nomeLim, imoveis;
    float renda, emp;
    int parc;
    int pontos = 0;
    
    scanf("%c %c %c %c", &dadoCad, &vincEm, &nomeLim, &imoveis);
    scanf("%f %f %d", &renda, &emp, &parc);
    
    if(dadoCad == 'S'){
        pontos += 100;
    }
    
    if(vincEm == 'S'){
        pontos += 200;
    }
    
    if(nomeLim == 'S'){
        pontos += 200;
    }
    
    if(imoveis == 'S'){
        int carros, casas, aps;
        scanf("%d %d %d", &carros, &casas, &aps);
        pontos += carros * 10 + casas * 40 + aps * 40;
    }
    
    if(emp <= 2*renda){
        pontos += 200;
    }else if(emp <= 3*renda){
        pontos += 100;
    }else if(emp <= 4*renda){
        pontos += 50;
    }
    
    if(emp/parc > renda * 0.3){
        pontos = 0;
    }
    
    printf("%d", pontos);
    
    return 0;
}