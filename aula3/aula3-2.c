#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    
    //getch(),  getche(), getchar(), putchar()
    
    // getch(): detalhe, ele nao aparece o valor no console enquanto digita, quando voce digita ele ja da enter automatico.
    // getche(): o valor é exibido no console e ele precisa dar enter para enviar, como um scanf normal.
    // getchar(): mesma coisa ^ mas exige o enter e pode mais de 1 char desde que vc defina na variavel (é a mesma coisa wtf?)
    // putchar():  é usada para escrever um caractere na saída padrão, geralmente o console. Ela é usada para imprimir um único caractere na tela

    char PRESSED_KEY;
    printf("Pressione uma tecla: ");
    PRESSED_KEY = getch(); 
    printf("Voce pressionou a tecla: %c \n ", PRESSED_KEY);


    //tmb é valido dar um pressed_key = getch(); e depois putchar(pressed_key) que ele ja imprime


    return 0;
}
