#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int nInt;
    double nDeci;
    printf("Digite 1 valor \n");
    scanf("%lf",&nDeci);
    nInt = nDeci;
    printf("O valor inteiro e %d \n",nInt);
    printf("O valor decimal e %lf", nDeci-nInt);
  
    return 0 ;
}