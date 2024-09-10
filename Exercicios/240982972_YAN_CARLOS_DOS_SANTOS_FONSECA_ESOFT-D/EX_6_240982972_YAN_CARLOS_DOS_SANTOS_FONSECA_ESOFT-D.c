#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    double num1,num2;
    char op;
    printf("Digite o primeiro valor \n");
    scanf("%lf",&num1);
        printf("Digite o primeiro valor \n");
    scanf("%lf",&num2);
    printf("Digite a operacao: ");
    scanf("%c", &op);

    printf("Digite dois numeros: \n");
    scanf("%lf %lf", &num1, &num2);

    switch (op) {
    case '+':
        printf("A soma e: %.2lf", num1+num2);
        break;
        
    case '-':
        printf("A subtracao e: %.2lf", num1-num2);
        break;

    case '/':
        printf("A divisao e: %.2lf", num1/num2);
        break;

    case '*':
        printf("A multiplicacao e: %.2lf", num1*num2);
        break;

    default:
        printf("Valor invalido para a operacao");
        break;
    }
    return 0 ;
}