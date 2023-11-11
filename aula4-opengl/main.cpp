#include <GL/glu.h>

    void display() {
        glClear(GL_COLOR_BUFFER_BIT);
        
        glBegin(GL_QUADS); // permite criar varios formatos, no caso escolhi quadrado.
        glColor3f(1.0, 0.0, 0.0); //quadrado vermelho
       
        glVertex2f(-0.5, -0.5); 
        glVertex2f(0.5, 0.5);
        glVertex2f(0.5, -0.5);
        glVertex2f(-0.5, 0.5);

        //agora precisamos finalizar e "fechar" o quadrado. Sempre feche o beggin que vc abriu
        glEnd();

        glFlush(); //projeta na tela o resultado
    }

int main() {
    // https://prnt.sc/Ut2xkfE3Zyvj

}