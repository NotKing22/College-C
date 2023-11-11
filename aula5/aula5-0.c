#include <stdio.h>
#include <windows.h>

int main(int argc, char const *argv[]) {
    
    //  https://learn.microsoft.com/en-us/windows/win32/inputdev/virtual-key-codes

    boolean run = TRUE;

    while(run) {
        if ((GetAsyncKeyState(VK_LBUTTON) & 0x8000) != 0) {  // != 0 testa se a tecla foi apertada
            Sleep(200);
            printf("Botão esquerda apertado. \n");
            // break finaliza

        }
        if ((GetAsyncKeyState(VK_RBUTTON) & 0x8000) != 0) {
            Sleep(200);
            printf("Botão direito apertado. \n");

        }
        if ((GetAsyncKeyState(0x41) & 0x8000) != 0) {
            Sleep(200);
            printf("Tecla A pressionada com sucesso! \n");
        }


    }

    return 0;
}
