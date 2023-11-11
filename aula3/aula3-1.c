#include <stdio.h>

int main(int argc, char const *argv[])
{
    char nome[] = "32";
    int num;

    sscanf(nome, "%d", &num);
    printf("O numero analisado foi %d", num);

    //converteu int para string

    return 0;
}
