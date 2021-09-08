/*Existem diversas regras para o cálculo do valor aposentadoria, que varia pelo sexo, idade, valor de contribuição, etc.

No instituto de previdência Tabajara, para calcular o valor da aposentadoria, considera-se que a pessoa vai viver até 100 anos. Calcula-se o total que a pessoa já contribuiu e divide-se por quanto tempo (em meses) falta até ela completar 100 anos. Aí chegamos no valor mensal da aposentadoria. 

Além disso, foi adicionado outra regra, de acordo com o sexo. 

Se for do sexo masculino, e ele tiver idade maior ou igual a 90 anos, será o valor será aumentado em 50%, caso contrário, será fornecido uma valor percentual de acréscimo (%) que será aplicado no valor da aposentaria calculado anteriormente. Esse será o valor final da aposentadoria.

Se for do sexo feminino, será fornecido dois valores, o salário mínimo e o percentual de acréscimo (%). O percentual será aplicado no valor da aposentadoria calculado anteriormente e se esse valor ficar abaixo do salario mínimo, então o valor da aposentadoria será o valor do salário mínimo, caso contrário a aposentadoria será esse valor acrescido.

Implemente um programa que vai receber o sexo (F ou M), idade, tempo de contribuição em meses e o valor mensal de contribuição.

Se for do sexo masculino e tiver idade menor que 90 anos, será fornecido o percentual de acréscimo. 

Se for do sexo feminino, será fornecido o valor do salário mínimo e percentual de acréscimo. */
#include <stdio.h>

int main(){
    int idade, tempo;
    char sexo;
    float cont, apose;
    
    scanf("%c %d %d %f", &sexo, &idade, &tempo, &cont);
    
    apose  = (tempo * cont)/((100 - idade) * 12);
    
    if(sexo == 'M'){
        if(idade>=90){
            apose = apose + apose *0.5;
        }else{
            float taxa;
            scanf("%f", &taxa);
            
            apose = apose +  apose * taxa;
        }
    }else{
        float salario, taxa;
        scanf("%f %f", &salario, &taxa);
        
        apose = apose + apose * taxa;
        
        if(apose < salario){
            apose = salario;
        }
    }
    
    printf("%f", apose);
    
    
    return 0;
}
