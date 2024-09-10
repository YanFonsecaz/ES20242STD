#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    char nome[50],sobrenome[50];
    printf("Digite seu primeiro nome \n");
    gets(nome);
    printf("Digite seu Sobrenome \n");
    gets(sobrenome);
    printf("Seu é %s %s",nome,sobrenome);
    
  
    return 0 ;
}