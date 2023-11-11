#include <stdio.h>
#include <stdlib.h> // for file operations

int main(int argc, char const *argv[])
{
    FILE *arquivo;

    arquivo = fopen("C:\\Users\\mathe\\Desktop\\codigos facul\\C\\aula5\\notas.txt", "w"); // ../

    if (arquivo == NULL) {
        printf("[AVISO] Erro ao abrir arquivo. \n");
        return 1;
    } else {
        printf("Arquivo localizado!");
    }

    fprintf(arquivo, "Teste de arquivo em C");
    fclose(arquivo);
}