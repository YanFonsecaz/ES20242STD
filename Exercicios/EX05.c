#include <stdio.h>

int main(){
    int v1;
    printf("Escreva 1 numero e descubra se ele e dividido por 5!! \n");
    scanf("%d",&v1);
    if (v1 % 5 == 0){
        printf("O valor de %d e divisivel por 5"" \n",v1);
    }else{
        printf("O valor de %d nao e divisivel por 5 \n",v1);
    }

    return 0;
}