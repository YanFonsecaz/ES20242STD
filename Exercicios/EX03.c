#include <stdio.h>

int main (){
    float n1,n2,n3;
    printf ("Nota 1: ");
    scanf ("%f", &n1);
    printf ("Nota 2: ");
    scanf ("%f", &n2);
    printf("Nota 3: ");
    scanf("%f",&n3);
    printf("Media= %f",(n1+n2+n3)/3);

    return 0;
}