#include <stdio.h>
int main(){
    int num, digito;
    printf("Digite um numero \n");
    scanf("%d",&num);
    if (num > 99 && num <1000){
        digito = num/100;
        if(digito%2==0){ 
        printf("O primeiro digito e par");

    }else{
        printf("O numero tem que ter 3 digitos");
    }
    
    return 0;
}