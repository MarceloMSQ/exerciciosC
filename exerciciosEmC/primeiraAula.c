#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char nome[21], sobreNome[21];
	printf("Primeiro nome: ");
	gets(nome);
	
	printf("Ultimo sobrenome: ");
	gets(sobreNome);
	
	printf("Ola senhor %s %s. Bem-vindo ao curso C Progressivo. \n", nome, sobreNome);
	
	return 0;
}
