#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    
   //gets() puts() ggets() fgets()

    char nome[10];
    printf("Informe seu nome: ");

      gets(nome);                       // mais pratico que o scanf, mas ele estoura a memoria. mesmo que voce limite o char, ele nao respeita.
                                        //  Entao é necessario o fgets:
      fgets(nome, sizeof(nome), stdin); //stdin é um cmd interno ele diz que a entrada sera lida de uma entrada padrao (teclado)



    //puts(nome);

    printf("Ola, %s. \n", nome);

    return 0;
}
