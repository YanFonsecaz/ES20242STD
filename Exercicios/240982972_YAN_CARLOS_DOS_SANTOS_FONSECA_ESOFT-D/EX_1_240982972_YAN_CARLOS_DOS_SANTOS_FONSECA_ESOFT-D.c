#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portugueses");
    int n;
    printf("Digite 1 valor");
    scanf("%lf",&n);

    if (n % 2 == 0){
        printf("Par");    
    }else{
        printf("Impar");
    }
    




    return 0 ;
}