#include "GL/freeglut.h"
#define _USE_MATH_DEFINES
#include <cmath>
#include "Lib(pict).h" //  библиотека
float pos_x = 0, pos_y = 0;
bool isRight = true;
// блок объ€влений функций
void renderScene(void);

// блок реализации функций

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(600,600);
    glutCreateWindow("OpenGL Start Application");
    glutDisplayFunc(renderScene);

    glutKeyboardFunc(processKeys);

    glutMainLoop();
    return 0;
}


void renderScene(void) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // эта функци€ должна быть первой в renderScene

    glPushMatrix();
    // glScalef(0.1,0.1,1);

    drawTera(0, 0);

    drawSky(0, 0);

    for (int i = 0; i < 4; i++)
        drawStar(-0.2 * i, 0);

    for (int i = 0; i < 360; i += 10)
        drawStar(0.5 * sin(i * M_PI / 180), 0.5 * cos(i * M_PI / 180));

    drawSTARS(0, 0); // требуетс€ доделать

    for (int i = 0; i < 15; i++) {
        drawTrawa(0.4 * i, -0.1 * i);
        drawTrawa(0.2 * i, 0);
    }

    for (int i = 0; i < 1; i++)
        drawTree(0.3 * i, -0.1 * i, 0.2 * i);

    drawCar(0, 0);

    drawNLO(0.05, 0.1, 3, 3);

    drawHays(0, 0);

    drawCat(pos_x, pos_y, 0);

    //dravDisplay(0.7,0.5,7); // дл€ активации графиков(при активации требуетс€ деактивировать код выше /**/)

    glPopMatrix();

	

    glutSwapBuffers(); // эта функци€ должна быть последний в renderScene
}

void processKeys(unsigned char key, int x, int y) {

    if (key == 13)
        exit(0); // close app
    if (key == 100) {
        pos_x = pos_x + 0.1;
    }
    if (key == 97) {
        pos_x = pos_x - 0.1;
    }

    glutPostRedisplay(); // отрисовка
}
