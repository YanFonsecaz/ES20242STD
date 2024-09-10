#include <stdio.h> 
#include <math.h> 
double soma(double n1, double n2);
double sub(double n1, double n2);
double div(double n1, double n2);
double mult(double n1, double n2);
double media(double n1, double n2); 
//porcentagem 
void eq2s(double a, double b, double c); 
int main(){ 
    /*printf("soma %.2f\n", soma (8,3));
    printf("sub %.2f\n", sub (8,3));
    printf("div %.2f\n", div (8,3));
    printf("mult %.2f\n", mult (8,3));
    printf("media %.2f\n", media (8,3));
     */
    double valor1, valor2, valor3; 
    char op;
    printf("escolha a operação: \n+"); 
    printf("+ adicao\n");
    printf("- subtração\n"); 
    printf("/ divisão\n");
    printf("* multiplicacão\n");
    printf("m media\n");
    scanf("%c", &op);
    if(op != 's'){
        printf ("digite o primeiro numero: "); 
        scanf("%lf", &valor1);
        printf ("digite o segundo numero "); 
        scanf("%lf", &valor2);
    } else { 
        printf ("digite o valor de a "); 
        scanf("%lf", &valor1);
        printf ("digite o valor de b "); 
        scanf("%lf", &valor2);
        prinf ("digite o valor de c "); 
        scanf("%lf", &valor3); 
    }
   /* printf("esse eh o op %c\n", op); 
    printf("esse eh o &op %p", &op);
    */
   printf ("digite o primeiro numero: "); 
   scanf("%lf", &valor1);
   printf ("digite o segundo numero: "); 
   scanf("%lf", &valor2);
   if(op == '+') printf("soma = %.2f", soma(valor1,valor2)); 
   else if(op == '-') printf("sub = %.2f", sub(valor1,valor2)); 
   else if(op == '/') printf("Div = %.2f", div(valor1,valor2)); 
   else if(op == '*') printf("Mult = %.2f", mult(valor1,valor2)); 
   else if(op == 'm') printf("Media = %.2f", media(valor1,valor2)); 
   else if(op == 's') eq2s(valor1,valor2,valor3);
   else{ 
    print("operacao %c invalida!",op); 
   }
    return 0;
}
void eq2s(double a, double b, double c){ 
    double delta = sub(mult(b,b), mult(mult(4,a),c));
}
double soma(double n1, double n2){ 
    //return n1+ n2; 
    return div(soma(n1,n2),2);
}
double sub(double n1, double n2){ 
    return n1 - n2; 
}
double div(double n1, double n2){ 
    return n1 / n2; 
}
double mult(double n1, double n2){ 
    return n1 * n2; 
}
double media(double n1, double n2){ 
    return (n1+ n2)/2; 
}