#include <stdio.h>
#include <stdlib.h>
#include <string.h>

  
int main(){
    char nome[50], cidade[25], telefone[25];
    int idade;
    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome),stdin); 
    
    printf("Digite sua idade: ");
    scanf("%d", &idade); 
    setbuf(stdin, NULL); // Limpa o buffer do teclado para evitar problemas com fgets após scanf


    printf("Digite sua cidade: ");
    fgets(cidade, sizeof(cidade), stdin);

    printf("Digite seu telefone: ");
    fgets(telefone, sizeof(telefone), stdin);

    //printf("Seu nome e %s , sua idade e %d , mora em %s e seu telefone e %s ", nome, idade, cidade, telefone);
    //Agora concatenar as informações em uma string e imprimir a mensagem completa

    char mensagem[200];
    snprintf(mensagem, sizeof(mensagem), "Seu nome e %s , sua idade e %d , mora em %s e seu telefone e %s ", nome, idade, cidade, telefone);
    printf("%s", mensagem);
    // o snprintf é uma função que formata a string e armazena na variável mensagem, evitando problemas de buffer overflow.
    //strcat pode ser usado para concatenar strings, mas é importante garantir que a string de destino tenha espaço suficiente para armazenar o resultado final, caso contrário, pode ocorrer um buffer overflow. O snprintf é uma alternativa mais segura, pois permite especificar o tamanho máximo da string de destino, evitando assim o risco de estouro de buffer.
    
}