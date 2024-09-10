#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float pi = 3.1415, r;
    printf("Informe o valor do RAIO \n");
    scanf("%f", &r);
    printf("Area de 1 circulo e \n", r*r*pi);

    return 0 ;
}