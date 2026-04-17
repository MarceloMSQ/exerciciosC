#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int metros, centimetros, milimetros;

    printf("Digite o valor em metros: ");
    scanf("%d", &metros);

    centimetros = metros * 100;
    if(metros != 1){
        printf("%d metros correspondem a %d centímetros\n", metros, centimetros);
    } else {
        printf("1 metro corresponde a 100 centímetros\n");
    }
    milimetros = metros * 1000;
    if(metros != 1){
        printf("%d metros correspondem a %d milímetros\n", metros, milimetros);
    } else {
        printf("1 metro corresponde a 1000 milímetros\n");
    }

    return 0;
}