/*O IPCA (Índice de Preços ao Consumidor Amplo) é considerado o termômetro oficial da inflação no país, pois seu principal objetivo é monitorar a variação nos preços dos produtos de mercado para o consumidor final.

Bem, o IPCA considera as seguintes categorias: alimentação e bebidas, artigos de residência, comunicação, despesas pessoais, educação, habitação, saúde e cuidados pessoais, transportes e vestuário.

Cada uma possui um peso diferente no cálculo, conforme você pode observar nas porcentagens abaixo, informadas pelo IBGE.

Alimentação e bebidas (23,12%)

Artigos de residência (4,69%)

Transportes (20,54%)

Comunicação (4,96%)

Despesas pessoais (9,94%)

Habitação (14,62%)

Saúde e cuidados pessoais (11,09%)

Vestuário (6,67%)

Educação (4,37%)

Fonte: https://www.btgpactualdigital.com/blog/financas/ipca-o-que-e/

Implemente uma função que irá receber o preço médio de cada categoria listada acima, em dois momentos, no início do mês e no final do mês, e calcule e retorne o valor do IPCA.

Para calcular a variação do preço (ou de qualquer propriedade), simplesmente aplique a seguinte formula: 

(PrecoAtual - PrecoAnterior)/PrecoAnterior. Para colocar a variação em porcentagem, multiplica-se por 100.

O IPCA será calculado fazendo a soma ponderada da variação de cada categoria. Seja variaPreco o vetor com a variação do preços de cada item acima. Então o IPCA é calculado da seguinte forma: 

Seja varia_preco o vetor contendo a variação de cada categoria.

IPCA = varia_preco[0]*23.12% + varia_preco[1]*4.69% + varia_preco[2]*20.54% + ... + varia_preco[8]*4.37%

A função terá o seguinte protótipo: 

float ipca(float preco_inicio[], float preco_final[], int n);

Onde o valor do preço médio de cada categoria estará na ordem da lista anteriormente, ou seja, na posição 0 (zero) dos dois vetores estão o preço atual e preço anterior da "Alimentação e bebidas", na posição 1 da "Artigos de residência" e assim sucessivamente.

Recebe o primeiro vetor com os preços no início do mês, depois recebe o segundo vetor com os preços no final do mês.

Usem float e imprima o valor do ipca em porcentagem, ou seja, multiplicado por 100 e com o simbolo % no final. 

Para imprimir o % no printf basta repeti-lo, ou seja, colocar ele duas vezes %%*/
#include <stdio.h>

float ipca(float preco_inicio[], float preco_final[], int tam){
    float peso[9];
    peso[0] = 0.2312;
    peso[1] = 0.0469;
    peso[2] = 0.2054;
    peso[3] = 0.0496;
    peso[4] = 0.0994;
    peso[5] = 0.1462;
    peso[6] = 0.1109;
    peso[7] = 0.0667;
    peso[8] = 0.0437;
    float ipca = 0;
    for(int cont = 0; cont < tam; cont++){
        ipca += ((preco_inicio[cont] - preco_final[cont])/preco_inicio[cont]) * peso[cont] *-100.0;
    }
    
    return ipca;
}
int main(){
    float vet_ini[9], vet_fim[9];
    
    for(int cont = 0; cont < 9; cont++){
        scanf("%f", &vet_ini[cont]);
    }
    
    for(int cont = 0; cont < 9; cont++){
        scanf("%f", &vet_fim[cont]);
    }
    
    float saida = ipca(vet_ini, vet_fim, 9);
    printf("%.4f%%", saida);
    return 0;
}