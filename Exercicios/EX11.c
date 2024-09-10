#include <stdio.h>
int main(){
    int n1,n2;
    char op;
    printf("Digite a operação que voce deseja + - * / \n");
    scanf("%c",&op);
    printf("Digite o primeiro valor \n");
    scanf("%d", &n1);
    printf("Digite o segundo valor \n");
    scanf("%d", &n2);
    switch (op){
    case '+':
        printf("A soma e %d \n", n1 + n2);
        break;
    case '-':
        printf("A subtracao %d \n",n1 - n2);
    case '*':
        printf("A Multiplicacao %d \n",n1 * n2);
    case '/':
        printf("A Divisao %d \n",n1 / n2);       
    default:
        printf("A operacao nao existe");
        break;
    }
    return 0;
}