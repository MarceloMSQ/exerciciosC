#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h>


int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char letra;
    int idade;
    printf("Digite a primeira letra do seu nome: ");
    scanf("%c", &letra);
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A primeira letra do seu nome é: %c\n", letra);
    printf("Você tem : %d anos!\n", idade);
}