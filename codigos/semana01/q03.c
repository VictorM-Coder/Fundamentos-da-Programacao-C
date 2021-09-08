//Alquimia é uma prática que combina elementos da Química, Física, Biologia, Medicina, Semiótica, Misticismo, Espiritualismo, Arte, Antropologia, Astrologia, Filosofia, Metalurgia e Matemática.
#include <stdio.h>
int main(){
    float altura, peso;
    int idade, ano, dia;
    
    printf("diga sua peso: ");
     scanf("%f", &peso);
    
    printf("diga sua altura: ");
     scanf("%f", &altura);
     printf("diga sua idade: ");
    scanf("%d", &idade);
    
   
    printf("diga o ano de seu nascimento: ");
     scanf("%d", &ano);
      printf("diga o dia do seu nascimento: ");
     scanf("%d", &dia);
     
     float numero = (((peso + altura)/idade) + ano) * dia;
     printf("%f", numero);
     
     return 0;
    
}