#include <stdio.h> // importando biblioteca saida e entrada dados
#include <stdlib.h> // Recursos basicos para trabalhar com terminal

int main(){
    int numero;
    int dobro;
    int triplo;
    
    printf("Digite um numero: ");
    scanf("%d", &numero); // lendo o numero digitado pelo usuario
    dobro = numero * 2; // calculando o dobro do numero
    triplo = numero * 3; // calculando o triplo do numero   
    printf("O dobro de %d e: %d\n", numero, dobro); 
    printf("O triplo de %d e: %d\n", numero, triplo); 

}