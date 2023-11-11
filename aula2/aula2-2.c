#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    time_t tempo_inicio, tempo_fim;
    double tempo_gasto;
    
    //iniciando tempo
    time(&tempo_inicio);

    for (int i = 0; i < 10000; i++) {
        printf("\n Contando: %d", i);
    }

    //finalizando tempo
    time(&tempo_fim);

    tempo_gasto = difftime(tempo_fim, tempo_inicio);

    struct tm *data = localtime(&tempo_gasto); // gera uma estrutura com todos os tipos de tempo do tempo_gasto (sec, min, hour e etc);
    char dataformatada[50];

    strftime(dataformatada, sizeof(dataformatada), "%d / %y / %m %m: %s: %h:", data); //sizeof pega o tamanho da dataformatada

    printf("\n O tempo de execucao foi: %f ", dataformatada);
    
    //printf("\n O tempo de execucao foi: %f segundo(s)", tempo_gasto);

    return 0;
}
