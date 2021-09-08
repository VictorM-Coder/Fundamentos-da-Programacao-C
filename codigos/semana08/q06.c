/*A crise no Brasil tá grande, com pouco dinheiro deseja-se comprar tudo, mas sabemos que isso não é possível. Então ajude as pessoas a saberem o que podem exatamente comprar.

Você receberá o valor que uma pessoa tem na carteira e a lista dos preços dos produtos da cesta básica, um preço por vez, e para cada produto, se ela puder comprar, ela compra. Diga quantos produtos da cesta básica esse trabalhador pode comprar.

Repare que a cada produto que ele compre, o valor disponível na carteira será decrementado pelo valor do produto comprado.

Vejamos o exemplo. Temos 4 produtos e a pessoa tem 15 reais na carteira. Os preços dos 4 produtos são 5.6, 4.8, 10.6, 3.5. Ela pode comprar o primeiro produto, ao comprar, sua carteira fica com 15-5.6 = 9.4. Ela pode comprar o segundo produto, ao comprar, sua carteira fica com 9.4-4.8 = 4.6. Ela não pode comprar o terceiro produto porque seu valor é maior que o valor na carteira. Ela pode comprar o quarto produto, ao comprar, sua carteira fica com 4.6 - 3.5 = 1.1. Ao final ela comprou 3 produtos. 

A primeira entrada será a quantidade de produtos da cesta básica, depois o valor que a pessoa tem na carteira e depois os preços dos produtos.*/
#include <stdio.h>

int main(){
    float tot, sala, totProd =0;
    int qntProd =0;
    
    scanf("%f %f", &tot, &sala);
    
    for(int cont = 1; cont <= tot; cont++){
        float prod;
        scanf("%f", &prod);
        
        if(sala > (totProd + prod)){
            totProd += prod;
            qntProd++;
        }
        
    }
    
    printf("%d", qntProd);
    return 0;
}