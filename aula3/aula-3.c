#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    //sprintf é o mesmo que trocar o valor primitivo de uma variavel. Exemplo String para Int.
    
    int NUM_CPF = 32;
    char STRING_CPF = 20;

    sprintf(STRING_CPF, "O cpf informado é: %d", NUM_CPF); // a msg daqui nao é exibida, apenas converte as variaveis.

    printf("O numero formatado é %s: \n", STRING_CPF);

    return 0;
}
