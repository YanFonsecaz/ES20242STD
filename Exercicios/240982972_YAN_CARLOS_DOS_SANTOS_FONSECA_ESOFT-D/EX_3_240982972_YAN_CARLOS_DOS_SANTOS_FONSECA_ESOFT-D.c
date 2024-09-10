#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n1,n2;
    printf("Digite o 1 valor \n");
    scanf("%d", &n1);
    printf("Digite o 2 valor \n");
    scanf("%d", &n2);
    if (n1>n2){
        printf("O maior valor é %d", n1);
    }else{
        printf("O maior valor é %d", n2);
    }
    
  
    return 0 ;
}