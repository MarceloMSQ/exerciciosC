#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float temperaturaC, temperaturaF;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &temperaturaC);

    temperaturaF = (temperaturaC * 9/5) + 32; // também posso usar o 1.8 que é o mesmo que 9/5 para evitar problemas de arredondamento
    printf("A temperatura %2.1f em C corresponde a %2.1f em F :\n", temperaturaC, temperaturaF);
    
    
    return 0;

}