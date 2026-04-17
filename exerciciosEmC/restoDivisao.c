#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1, numero2, resto;
    printf("Digite um numero: ");
    scanf("%d", &numero1);
    printf("Digite outro numero: ");
    scanf("%d", &numero2);
    
    resto = numero1 % numero2;
    printf("O resto da divisao e: %d", resto);

}