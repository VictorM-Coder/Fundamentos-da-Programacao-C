/*Você precisa implementar um programa de controle de estoque de uma loja. Cada produto terá um identificador (inteiro), sua quantidade em estoque (inteiro) e o seu preço atual (float). Defina uma novo tipo de variável (typedef struct) para representar o produto desse seu programa.

Seu programa irá receber essas informações de n produtos que vai representar o estoque no início da semana. Armazene em um vetor do tipo Produto.

Depois seu programa vai receber a quantidade de venda de cada produto na semana. serão informado n números inteiros.

Você precisa calcular o valor total de vendas dessa semana e atualizar o estoque da loja.

Imprima o valor total de vendas e depois a quantidade que sobrou em estoque de cada produto.*/

#include <stdio.h>

typedef struct{
    int identificador, qntd;
    float preco;
    
    
}Produto;

void atualizar_estoque(Produto prod[], int qnt_vendas[], int tam){
    for(int cont = 0; cont < tam; cont++){
        prod[cont].qntd -= qnt_vendas[cont];
    }
}

float valor_vendas(Produto prod[], int qnt_vendas[], int tam){
    float valor_tot = 0;
    for(int cont = 0; cont < tam; cont++){
        valor_tot+= prod[cont].preco * qnt_vendas[cont];
    }
    
    return valor_tot;
}
int main(){
    int tam;
    scanf("%d", &tam);
    Produto prod[tam];
    int vendas[tam];
    
    for(int cont = 0; cont < tam; cont++){
        scanf("%d %d %f", &prod[cont].identificador, &prod[cont].qntd, &prod[cont].preco);
    }
    
    for(int cont = 0; cont < tam; cont++){
        scanf("%d", &vendas[cont]);
    }
    
    atualizar_estoque(prod, vendas, tam);
    float total =valor_vendas(prod, vendas, tam);
    printf("%.2f\n", total);
    
    for(int cont = 0; cont < tam; cont++){
        printf("%d ", prod[cont].qntd);
    }
    return 0;
}