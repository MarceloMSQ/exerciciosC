#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero1, numero2, media;
   
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &numero2);

    media = (numero1 + numero2)/2;
    printf("A media de %d e %d e %d ", numero1, numero2, media);

}