#include <stdio.h>
#include <stdlib.h>
int main(){
    int numero1, numero2;
    int soma, produto, quadrado1, quadrado2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    soma = numero1 + numero2;
    quadrado2 = numero2 * numero2;
    produto = numero1 * quadrado2;
    quadrado1 = numero1 * numero1;
    
    printf("A soma de %d e %d e: %d \n", numero1, numero2, soma);
    printf("O produto de %d pelo quadrado de %d e: %d\n", numero1, numero2, produto);
    printf("O quadrado de %d e: %d \n",numero1, quadrado1);
    
    //O %d é usado para formatar a saída, indicando onde os valores das variáveis devem ser inseridos na string de saída.
    
}