#include <stdio.h>

int main(){
    int l1,l2,l3;
    printf("Digite 3 lados de um triangulo\n");
    scanf("%d %d %d", &l1,&l2,&l3);
    l1 = l1 * l1;
    l2 = l2 * l2;
    l3 = l3 * l3;
    if (l1 == l2+l3 || l2==l1+l2 || l3==l1+l2)
    printf ("E um triangulo retangulo\n");
    else{
        printf("Nao e triangulo retangulo\n");
    }
    return 0;
}