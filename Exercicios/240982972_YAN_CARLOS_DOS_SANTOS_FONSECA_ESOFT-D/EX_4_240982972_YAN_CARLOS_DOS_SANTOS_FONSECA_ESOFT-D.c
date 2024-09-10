#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    double salario, dolar;
    printf("Digite o seu Salario em R$ \n");
    scanf("%lf", &salario);
    printf ("Digite o valor do Dolar \n");
    scanf("%lf", &dolar);

    printf("O seu salario em R$ e %lf e o seu Salario em Dolar e USD$ %lf", salario, salario/dolar);

    
  
    return 0 ;
}