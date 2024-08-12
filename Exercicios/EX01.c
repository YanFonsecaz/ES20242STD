#include <stdio.h>

int main(){
    int a,b,s;
    
    printf("Digite um numero \n");
    scanf("%d", &a);
    printf("Digite outro numero \n");
    scanf("%d",&b);
    s=a+b;
    printf("A  Soma de %d + %d = %d", a,b,s);

    return 0;
}