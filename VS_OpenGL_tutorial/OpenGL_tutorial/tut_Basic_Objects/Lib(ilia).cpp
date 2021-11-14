#include "Lib(ilia).h"


void drawTree(float x, float y, float z)
{
    glPushMatrix();

    glTranslatef(x, y, z);

    glBegin(GL_TRIANGLES);

    glColor3f(0.5, 0, 0);
    glVertex2f(-0.85, 0.3);
    glVertex2f(-0.8, 0);
    glVertex2f(-0.9, 0);
    //
    glColor3f(0, 0.7, 0);
    glVertex2f(-0.85, 0.4);
    glColor3f(0, 0.5, 0);
    glVertex2f(-0.75,0.1);
    glVertex2f(-0.95, 0.1);
    //
    glColor3f(0, 0.7, 0);
    glVertex2f(-0.85, 0.4);
    glColor3f(0, 0.5, 0);
    glVertex2f(-0.75, 0.2);
    glVertex2f(-0.95, 0.2);

    glEnd();

    glPopMatrix();
}

    void drawTera(float x, float y) 
    {
        glPushMatrix();
        glTranslatef(x, y, 0);
        glBegin(GL_QUADS);
        glColor3f(0.0, 0.9, 0.0);
        glVertex2f(-1, 0);
        glVertex2f(1, 0);
        glColor3f(0.0, 0.39, 0.0);
        glVertex2f(1, -1);
        glVertex2f(-1, -1);

        glEnd();

        glPopMatrix();
    }
    void drawSky(float x, float y) 
    {

        glPushMatrix();
        glTranslatef(x, y, 0);
        glBegin(GL_QUADS);
        glColor3f(0.0, 0.0, 4.0);
        glVertex2f(-1, 0);
        glVertex2f(1, 0);
        glColor3f(0.1, 0.1, 0.1);
        glVertex2f(1, 1);
        glVertex2f(-1, 1);
        glEnd();
        glPopMatrix();
    }

    void drawStar(float x, float y) 
    {

        glPushMatrix();
        glTranslatef(x, y, 0);
        glBegin(GL_TRIANGLES);
        glColor3f(1.0, 1.0, 0.0);//�������� ����
        //������� ���
        glVertex2f(0, 1);
        glVertex2f(0.01, 0.95);
        glVertex2f(-0.01, 0.95);
        //������ ���
        glVertex2f(0.01, 0.95);
        glVertex2f(-0.01, 0.95);
        glVertex2f(0, 0.9);
        //����� ���
        glVertex2f(0, 0.96);
        glVertex2f(0, 0.94);
        glVertex2f(-0.05, 0.95);
        //������ ���
        glVertex2f(0, 0.96);
        glVertex2f(0, 0.94);
        glVertex2f(0.05, 0.95);

        glEnd();

        glPopMatrix();
    }

    void drawSTARS(float x, float y)
    {
        glPushMatrix();

        glTranslatef(x, y, 0);

        glBegin(GL_TRIANGLES);

        glColor3f(1, 1, 0);
        //1 �������
        glVertex2f(-0.15, 0);
        glVertex2f(0, 0);
        glVertex2f(-0.15, 0.5);
        //2 ������
        glVertex2f(-0.135, 0.065);
        glVertex2f(0, 0);
        glVertex2f(-0.15, 0.5);
        //3 �������
        glVertex2f(-0.135, 0.065);
        glVertex2f(0, 0);
        glVertex2f(-0.115, 0.07);
        //4 �������
        glVertex2f(-0.1, 0.065);
        glVertex2f(0, 0);
        glVertex2f(-0.115, 0.07);
        //5 �������
        glVertex2f(-0.1, 0.065);
        glVertex2f(0, 0);
        glVertex2f(-0.115, 0.07);
        //6 ������
        glVertex2f(-0.5, 0.15);
        glVertex2f(0, 0);
        glVertex2f(0, 0.15);

        glEnd();

        glPopMatrix();
    }

    void drawTrawa(float x, float y)
    {
        glPushMatrix();

        glTranslatef(x, y, 0);

        glBegin(GL_TRIANGLES);
        //
        glColor3f(0, 0.5, 0);
        glVertex2f(-0.8, -0.5);
        glVertex2f(-0.7, -0.5);
        glColor3f(0, 0.9, 0);
        glVertex2f(-0.75, -0.2);
        //
        glColor3f(0, 0.5, 0);
        glVertex2f(-0.7, -0.5);
        glVertex2f(-0.6, -0.5);
        glColor3f(0, 0.9, 0);
        glVertex2f(-0.65, -0.2);
        //
        glColor3f(0, 0.5, 0);
        glVertex2f(-0.8, -0.5);
        glVertex2f(-0.7, -0.5);
        glColor3f(0, 0.7, 0);
        glVertex2f(-0.9, -0.3);
        //
        glColor3f(0, 0.5, 0);
        glVertex2f(-0.8, -0.5);
        glVertex2f(-0.6, -0.5);
        glColor3f(0, 0.7, 0);
        glVertex2f(-0.45, -0.3);
        //
        glColor3f(0, 0.5, 0);
        glVertex2f(-0.8, -0.5);
        glVertex2f(-0.6, -0.5);
        glColor3f(0, 0.7, 0);
        glVertex2f(-0.55, -0.4);

        glEnd();

        glPopMatrix();
    }

    void drawHays(float x, float y)
    {
        glPushMatrix();

        glScalef(0.5, 0.5, 1);

        glTranslatef(x, y, 0);

        glBegin(GL_QUADS);

        glColor3f(0.2, 0, 0);
        glVertex2f(0.5, 0);
        glVertex2f(0.5, 0.3);
        glVertex2f(0.8, 0.3);
        glVertex2f(0.8, 0);
        //
        glColor3f(0, 0, 1);
        glVertex2f(0.55, 0.1);
        glVertex2f(0.55, 0.2);
        glVertex2f(0.65, 0.1);
        glVertex2f(0.65, 0.2);
        //
        glColor3f(0.2, 0.2, 0);
        glVertex2f(0.65, 0);
        glVertex2f(0.65, 0.15);
        glVertex2f(0.75, 0.15);
        glVertex2f(0.75, 0);
        glEnd();
        glBegin(GL_TRIANGLE_FAN);
        glColor3f(1, 1, 0);
        glVertex2f(0.5, 0.3);
        glVertex2f(0.65, 0.5);
        glVertex2f(0.8, 0.3);
        glEnd();
        //�������� ����
        glBegin(GL_QUADS);
        glColor3f(0.3, 0.3, 0.3);
        glVertex2f(-0.2, 0);
        glVertex2f(-0.2, 0.2);
        glVertex2f(0.2, 0.2);
        glVertex2f(0.2, 0);
        // ����
        glColor3f(0.3, 0, 0);
        glVertex2f(-0.1, 0.2);
        glVertex2f(-0.1, 0.5);
        glVertex2f(0.1, 0.5);
        glVertex2f(0.1, 0.2);

        glEnd();

        glBegin(GL_TRIANGLES);
        //������ ��������� ���������
        glVertex2f(-0.2, 0.2);
        glVertex2f(-0.1, 0.2);
        glVertex2f(-0.1, 0.5);
        //����� ��������� ���������
        glVertex2f(0.2, 0.2);
        glVertex2f(0.1, 0.2);
        glVertex2f(0.1, 0.5);
        //�������
        glVertex2f(-0.1, 0.5);
        glVertex2f(0.1, 0.5);
        glVertex2f(0, 0.6);
        //������� �������
        glColor3f(1, 1, 1);
        glVertex2f(0, 0.5);
        glVertex2f(-0.05, 0.8);
        glVertex2f(0.05, 0.8);
        //������ �������
        glVertex2f(0, 0.5);
        glVertex2f(-0.3, 0.2);
        glVertex2f(-0.33, 0.25);
        //����� �������
        glVertex2f(0, 0.5);
        glVertex2f(0.3, 0.2);
        glVertex2f(0.33, 0.25);

        glEnd();

        glPopMatrix();

    }

    void drawNLO(float x, float y, float f, float g) {
        glPushMatrix();

        glScalef(f, g, 1);

        glTranslatef(x, y, 0);

        glBegin(GL_TRIANGLES);
        //����� ����
        glColor3f(0.5, 0.5, 0.5);
        glVertex2f(0.10, 0.11);
        glColor3f(0.4, 0.4, 0.4);
        glVertex2f(0.07, 0.12);
        glVertex2f(0.07, 0.10);
        //������ ����
        glColor3f(0.5, 0.5, 0.5);
        glVertex2f(0.01, 0.11);
        glColor3f(0.4, 0.4, 0.4);
        glVertex2f(0.03, 0.12);
        glVertex2f(0.03, 0.10);
        //������
        glColor3f(0, 0, 1);
        glVertex2f(0.07, 0.12);
        glVertex2f(0.03, 0.12);
        glColor3f(1, 1, 1);
        glVertex2f(0.05, 0.13);
        //���
        glColor3f(0, 0.4, 0);
        glVertex2f(0.07, 0.01);
        glVertex2f(0.03, 0.01);
        glVertex2f(0.05, 0.10);
        glEnd();

        glBegin(GL_QUADS);
        //������
        glColor3f(0.4, 0.4, 0.4);
        glVertex2f(0.07, 0.10);
        glVertex2f(0.07, 0.12);
        glVertex2f(0.03, 0.12);
        glVertex2f(0.03, 0.10);

        glEnd();

        glPopMatrix();
    }
   

    void drawCar(float x, float y) 
    {
        glPushMatrix();

        glTranslatef(x, y, 0);

        glBegin(GL_QUADS);

        glColor3f(0.7, 0.1, 0.2);
        //������
        glVertex2f(0.2, -0.2);
        glVertex2f(0.2, -0.3);
        glVertex2f(0.5, -0.3);
        glVertex2f(0.5, -0.2);
        //�����
        glColor3f(0.7, 0.1, 0.2);
        glVertex2f(0.3, -0.1);
        glVertex2f(0.2, -0.2);
        glColor3f(0, 0, 0.7);
        glVertex2f(0.45, -0.2);
        glVertex2f(0.4, -0.1);
        //�������� ������
        glColor3f(0, 0, 0);
        glVertex2f(0.25, -0.25);
        glVertex2f(0.25, -0.3);
        glVertex2f(0.3, -0.3);
        glVertex2f(0.3, -0.25);
        //������ ������
        glVertex2f(0.4, -0.25);
        glVertex2f(0.4, -0.3);
        glVertex2f(0.45, -0.3);
        glVertex2f(0.45, -0.25);

        glEnd();

        glPopMatrix();
    }

    void drawCat(float x, float y, float z)
    {
        glPushMatrix();

        glScalef(0.15, 0.15, 1);

        glTranslatef(x, y, z);

        glBegin(GL_TRIANGLES);
        //����
        glColor3f(0.1, 0.1, 0.1);
        glVertex2f(0, 0.4);
        glVertex2f(0.2, -0.2);
        glVertex2f(-0.2, -0.2);

        //������
        glVertex2f(0.2, 0.6);
        glVertex2f(-0.2, 0.6);
        glVertex2f(0, 0.4);

        //���
        glVertex2f(0.2, 0.6);
        glColor3f(1, 1, 1);
        glVertex2f(0.15, 0.7);
        glVertex2f(0.1, 0.6);
        glColor3f(0.1, 0.1, 0.1);
        glVertex2f(-0.2, 0.6);
        glColor3f(1, 1, 1);
        glVertex2f(-0.15, 0.7);
        glVertex2f(-0.1, 0.6);

        //�����
        glColor3f(1, 1, 1);
        glVertex2f(0.4, 0.2);
        glVertex2f(0.5, 0.1);
        glVertex2f(0.2, -0.2);
        //����� �����
        glColor3f(1, 0.7, 1);
        glVertex2f(0.05, 0.55);
        glVertex2f(0.09, 0.55);
        glVertex2f(0.06, 0.5);

        //����� ������
        glVertex2f(-0.05, 0.55);
        glVertex2f(-0.09, 0.55);
        glVertex2f(-0.06, 0.5);

        //����
        glColor3f(7.6, 3, 0.5);
        glVertex2f(0.1, -0.1);
        glVertex2f(0.12, -0.2);
        glVertex2f(0.06, -0.2);
        glVertex2f(-0.1, -0.1);
        glVertex2f(-0.12, -0.2);
        glVertex2f(-0.06, -0.2);

        glEnd();

        glPopMatrix();
    }
