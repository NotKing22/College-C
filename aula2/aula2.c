#include <stdio.h>
#include <locale.h>

int getMaxNumber(num1, num2);

int main(int argc, char const *argv[]) {
   setlocale(LC_ALL, "Portuguese_Brazil");

   int num1, num2;
    printf("Insira o primeiro número: ");
    scanf("%d", &num1);
    printf("Insira o segundo número: ");
    scanf("%d", &num2);
    printf("\n O maior número entre eles é: %d", getMaxNumber(num1, num2));
    return 0;
}

int getMaxNumber(int num1, int num2) {
    int resultado;
    if (num1 > num2) {
        resultado = num1;
    } else {
        resultado = num2;
    }
    return resultado;
}
