#include <stdio.h>

int main(){
    double v1,desc=0;
    printf("Digite o valor da compra \n");
    scanf("%lf",&v1);
    if(v1 > 100 && v1<500){
        desc = v1 * 0.10;
        printf("Voce teve 10 porcento de desconto %lf", v1-desc);
    }else if(v1>500){
        desc = v1 * 0.20;
        printf("Voce teve 10 porcento de desconto %lf", v1-desc);
    }else{
        printf("Voce nao tem desconto, valor a pagar %lf", v1);
    }

    return 0;
}