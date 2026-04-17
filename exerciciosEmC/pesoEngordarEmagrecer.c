#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    float peso, pesoEgordar15porcento, pesoEmagrecer20porcento;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    pesoEgordar15porcento = peso + (peso * 0.15);
    pesoEmagrecer20porcento = peso - (peso * 0.20);
    printf("Se você engordar 15%% seu peso será : %2.1f \n", pesoEgordar15porcento);
    printf("Se você emagrecer 20%% seu peso será : %2.1f \n", pesoEmagrecer20porcento);


    return 0;
}