#include <stdio.h>
#include <stdlib.h>

/* Fa�a um programa que leia 100 n�meros inteiros e mostre-os na ordem inversa em que foram lidos.*/
/* Fa�a um programa que leia a nota de 20 alunos da turma e mostre as que s�o iguais ou superiores � m�dia da turma. */

void main() {
	
	float notas[20];
	int media;
	int posicao;
	int soma;
	
	for (posicao = 0; posicao < 20; posicao++) {
		scanf ("%f",&notas[posicao]);
		soma=soma+notas[posicao];
	}
	media = soma/20;
	printf("numeros maiores que a media %.2f \n", media);
	for (posicao = 0; posicao < 20; posicao++) {
		if (notas[posicao] >= media) {
			printf("%.2f \n", notas[posicao]);
		}
		
	}


	/*	
	int vet[100];
	int i;
	for (i = 0; i<=100; i++) {
		vet[i] = i;
		printf("\n");		
		printf("%d", vet[i]);
		if (i == 100) {
			for(i = 100; i>= 1; i--) {
				printf("\n");		
				printf("%d", vet[i]);
			}
			break;
		}
	}   */
}
