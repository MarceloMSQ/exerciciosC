#include <stdio.h>

int main(){
    int cadastrado=0, ativo=0, logado=0;
    char opcao;
   

    printf("Deseja cadastrar sua conta? S/N \n");
    scanf("%c", &opcao);
    if(opcao == 'S'|| opcao == 's'){
    	cadastrado = 1;
        printf("Conta cadastrada.\n");
        }
        
    printf("Dejesa ativar sua conta? S/N \n");
    scanf(" %c", &opcao);//O espaço antes do %c é para consumir o caractere de nova linha deixado pelo scanf anterior
    
    if(opcao == 'S'|| opcao == 's'){
        ativo = 1;
        printf("Conta ativada. \n");
		}

    printf("Dejesa logar sua conta? S/N \n");
    scanf(" %c", &opcao);
    if(opcao == 'S'|| opcao == 's'){
        logado = 1;
        printf("Conta logada.");
		}
    
    if((cadastrado == 1 ) && (ativo == 1) || (logado == 1)){//A ordem dos operadores é importante aqui. O operador && tem precedência sobre o operador ||, então as condições serão avaliadas corretamente.
        printf("Seja bem vindo!\n");
    }else{
        printf("Ops...Algo deu errado!\n");
    }


}