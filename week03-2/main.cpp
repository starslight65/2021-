
#include <GL/glut..h>


void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glutSoildTeapot(0.3);

    glutSwapBuffers();
}


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);//�]�wGLUT��l��

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);//��ܼҦ�

    glutCreateWindow("08160634�����v");//�}GLUT����


    glutDisplayFunc(display);//��ܨ禡

    glutMainLoop();//GLUT�D�n�j��
}
