#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL,"pt_BR.UTF-8");
    int anoNascimento, idade, anoAtual;
    printf("Digite o ano de seu nascimento: ");
    scanf("%d", &anoNascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);
    idade = anoAtual - anoNascimento;
    printf("Você tem %d anos de idade \n", idade);


}