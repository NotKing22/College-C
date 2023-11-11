#include <locale.h>

int main(int argc, char const *argv[])
{

    setlocale(LC_ALL, "Portuguese_Brazil");

    int num1, num2, soma, divi, multi, sub;
    printf("Insira o primeiro numero: ");
    scanf("%d", &num1);
    printf("Insira o segundo numero: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    divi = num1 / num2;
    multi = num1 * num2;
    sub = num1 - num2;
    printf("A soma deles é: %d\n", num1 + num2);
    printf("A multiplição deles é: %d\n", multi);
    printf("A divisão deles é: %d\n", divi);
    printf("A subtração deles é: %d\n", sub);
    return 0;
}
