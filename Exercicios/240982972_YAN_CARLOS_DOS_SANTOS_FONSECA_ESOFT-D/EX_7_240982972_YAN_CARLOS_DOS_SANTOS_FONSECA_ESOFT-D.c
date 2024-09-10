#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float n1,n2,n3;
    printf("Digite o 1 valor \n");
    scanf("%lf", &n1);
    printf("Digite o 2 valor \n");
    scanf("%lf", &n2);
    printf("Digite o 3 valor \n");
    scanf("%lf", &n3);
    printf("A media e ", (n1+n2+n3)/3);
    return 0 ;
}