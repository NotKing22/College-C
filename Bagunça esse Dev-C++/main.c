#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*  Para indicar a posi��o de entrada de conte�do de vari�veis dos tipos int e char utilizam-se, respectivamente, 
os s�mbolos %d e %c. Vejamos, a seguir, a utiliza��o dessas vari�veis.

Repare que a vari�vel do tipo float � armazenada com seis casas decimais. 
Para reduzir esse n�mero, utiliza-se %.1f, %.2f, entre outros. O n�mero entre �.� e �f� indica as casas decimais exibidas.
 � importante lembrar que o conte�do da vari�vel permanece inalterado, visto que a mudan�a afeta apenas a forma como ser� feita a escrita na tela*/


void main() {
	int a = 10;
	char cr = 'Z';
	printf("hello world\n");
	printf("Atualmente temos um total de %d alunos da turma %c", a, cr);
	printf("\n A variavel 'a' vale %d e seu sucessor e o %d", a, a+1);
	
	printf("Agora vamos printar uma frase classica, porem com estilo:");
	char ch1, ch2, ch3;
	ch1 = 'H';
	ch2 = 'o';
	ch3 = 'W';
	printf("\n %cell%c %corld.", ch1, ch2, ch3);
	printf("\n Printando um float sem formatar e depois formatando.");
	
	float x = 12.5;
	printf("O float sem formatar e %f", x);
	printf("O float formatado e %.1f", x);
	int percentage = 6%2;
	printf("\n %d", percentage);		
	
	int numero;
	printf("\n Insira um valor ae patr�o que eu vou adivinhar ele. \n");
	scanf("%d", &numero);
	printf("O seu numero e %d ", numero);
	
	float dividendo, divisor;
	printf("\n Agora entre com 2 numeros reais \n");
	scanf("%f %d", &dividendo, &divisor);
	printf("A divisao de %.2f por %.2f vale %.2f", dividendo, divisor, dividendo/divisor);
	
	/*fflush(stdin); esse codigo limpa o buffer do teclado, entao se tu quiser enviar 2 char nao tem perigo de coletar o ENTER tmb/*
}
