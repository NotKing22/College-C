#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	
	int cadastrado, ativo, logado;
	char opcao;
	
	cadastrado = ativo = logado = 0;

	printf("Deseja cadastrar sua conta? S/N  \n");
	scanf(" %c", &opcao);
	
	if (opcao == 'S') { //Cadastrado
		cadastrado = 1;
		printf("\nConta cadastrada com sucesso.\n");
	}
	
	printf("Deseja ativar sua conta? S/N  \n");
	scanf(" %c", &opcao);
	if (opcao == 'S') { //Ativado
		ativo = 1;
		printf("\nConta ativada com sucesso\n");
	}
	
	printf("Deseja logar na sua conta? S/N  \n");
	scanf(" %c", &opcao);
	if (opcao == 'S') { //Logado
		logado = 1;
		printf("\nConta logada com sucesso\n");
	}
	
	if ((cadastrado == 1) && (ativo == 1) && (logado == 1)) {
		printf("\nSeja bem-vindo\n");
	} else {
		printf("\nHouve um erro inesperado.\n");
	}
	
	
	/*switch(opcao) {
		
		case 1: {
			printf("Numero 1");
			break;
		}
		case 2: {
			printf("Numero 2");
			break;
		}
		
		default: printf("Nem 1 nem 2");
		
	} */ 
}
	
