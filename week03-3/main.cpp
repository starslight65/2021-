
#include <GL/glut.h>


void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_TRIANGLES);

                glColor3f(1.0f, 0.0f, 0.0f);   glVertex2f(0.0f,   1.0f);
                glColor3f(0.0f, 1.0f, 0.0f);   glVertex2f(0.87f,  -0.5f);
                glColor3f(0.0f, 0.0f, 1.0f);   glVertex2f(-0.87f, -0.5f);

    glEnd();
    glColor3f(1,1,0);
    glutSolidCube(0.5);

    glutSwapBuffers();
}


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///�]�wGLUT��l��

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///��ܼҦ�

    glutCreateWindow("�ί� ���{�]�ȦM�� �Q���ݮt���u ���ĵe���A�y�X");///�}GLUT����


    glutDisplayFunc(display);///��ܨ禡

    glutMainLoop();///GLUT�D�n�j��
}
