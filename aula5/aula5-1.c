#include <stdio.h>
#include <windows.h>

int main(int argc, char const *argv[])
{

    // https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes

    while(TRUE) {
        if ((GetAsyncKeyState(0x42) & 0x8000) != 0) { // B
            Sleep(200);
            printf("Tecla B pressionada com sucesso! \n");

        }
        if ((GetAsyncKeyState(0x44) & 0x8000) != 0) { // D
            Sleep(200);
            printf("Tecla D pressionada com sucesso! \n");

        }
        if ((GetAsyncKeyState(0x56) & 0x8000) != 0) { // V
            Sleep(200);
            printf("Tecla V pressionada com sucesso! \n");

        }
    }
    return 0;
}
