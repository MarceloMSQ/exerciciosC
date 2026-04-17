#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float nota1, nota2, mediaPonderada, pesoNota1 = 2, pesoNota2 = 3;
        
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    mediaPonderada = ((nota1 * pesoNota1) + (nota2 * pesoNota2)) / (pesoNota1 + pesoNota2); // a média ponderada é a soma dos produtos das notas pelos seus pesos, dividida pela soma dos pesos

    printf("A média ponderada é: %2.2f\n", mediaPonderada);


    return 0;
}