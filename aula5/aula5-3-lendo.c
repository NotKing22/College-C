#include <stdio.h>
#include <stdlib.h> // arquivos

int main(int argc, char const *argv[])
{
    
    FILE *arquivo;
    char linha[100];

    arquivo = fopen("C:\\Users\\mathe\\Desktop\\codigos facul\\C\\aula5\\notas.txt", "r"); // file open. r = perm de ler

    if (arquivo == NULL) {
        printf("[AVISO] Erro ao abrir arquivo. \n");
        return 1;
    } else {
        printf("Arquivo localizado!\n");
    }

    while(fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha);
    }
    fclose(arquivo);
}
