#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main() {
    int num1, num2, soma, divi, multi, sub;
    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    printf("Insira o segundo numero: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    divi = num1 / num2;
    multi = num1 * num2;
    sub = num1 - num2;
    printf("A soma deles �: %d\n", num1 + num2);
    printf("A multiplica��o deles �: %d\n", multi);
    printf("A divis�o deles �: %d\n", divi);
    printf("A subtra��o deles �: %d\n", sub);
    return 0; 
}
