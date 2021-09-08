/*Os irmão Metralhas elaboraram um excelente plano para roubar de vez o Tipo Patinhas. Como de costume, ele já fizeram a divisão do dinheiro sem ainda ter o dinheiro.

Como os Irmãos metralhas não são bons em matemática, os ajude a obter o valor em reais que cada um irá levar. 

Os 3 irmão irão lhe dizer o percentual (%) que cada um terá direito e o valor total obtido. Calcule o valor que cada um irá receber.*/
#include <stdio.h>

int main(){
    float p1, p2, p3;
    float tot, s1, s2, s3;
    
    scanf("%f %f %f", &p1, &p2, &p3);
    scanf("%f", &tot);
    
    s1 = (p1/100) * tot;
    s2 = (p2/100) * tot;
    s3 = (p3/100) * tot;
    
    printf("%.2f %.2f %.2f", s1, s2, s3);
    return 0;
}