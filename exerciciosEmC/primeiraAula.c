#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// strlen(); função retorna tamanho da string.
//strcpy (dest, fonte); copia string contida na variável fonte para dest.
//strcat (dest, fonte); concatena string.

int main() {
	char nome[21], sobreNome[21];
	printf("Primeiro nome: ");
	gets(nome);
	
	printf("Ultimo sobrenome: ");
	gets(sobreNome);
	//strcpy(sobreNome, nome); //copiar nome para sobrenome
	strcat(sobreNome, nome);
	
	printf("Ola senhor %s %s. Bem-vindo ao curso C Progressivo. \n", nome, sobreNome);
	printf("O nome tem tamanho %d", strlen(nome));
	
	
	return 0;
}
