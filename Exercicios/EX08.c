#include <stdio.h>
int main(){
    int num;
    printf("Digite um numero \n");
    scanf("%d", &num);
    if ((num % 3 == 0) && (num % 7 == 0)) { //if(num % 3 == 0 && num % 7 == 0)
        printf ("É diviviel por 3 e 7");
    }
    return 0;
}